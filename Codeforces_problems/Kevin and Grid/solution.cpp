//Observations
// 1. An obvious solution would be to do DFS, but it is O(nmq)O(nmq).

// 2. Firstly we focus on answering a single question.

// We represent our input with two graphs (one for cells with temperature less than X and other for temperatures greater than X),
// in which we add an edge between two neigbouring cells.

// As it is a subgraph of the grid graph, this means that this graph is planar and thus we may apply Euler's formula on both graphs:

// V1+F1=E1+C1V1+F1=E1+C1, where V1 is the number of vertices in graph 1, F1 is the number of faces in graph 1, …….

// However, some faces are not interesting, namely the 2×22×2 square of adjacent cells. Let Q1Q1 be the number of such squares.

// Similarly, V2+F2=E2+1+C2V2+F2=E2+1+C2.

// We see that interesting faces in graph 1 represent connected components in graph 2 that cannot reach the border, and vice-versa. In this way, if we subtract the equations, we get C1−F1+F2−C2=V1−E1+E2−V1+Q1−Q2C1−F1+F2−C2=V1−E1+E2−V1+Q1−Q2. We can observe that, because of this interpretation, the LHS of the equation is the answer.

// We have to devise an algorithm to calculate efficiently the number of squares/edges. Letś calculate horizontal edges, and do the same for vertical edges.

// Firstly, if ai+bj≥Xai+bj≥X and ai+bj+1≥Xai+bj+1≥X then ai+min(bj,bj+1)≥Xai+min(bj,bj+1)≥X. So we create array BB such that Bj=min(bj,bj+1)Bj=min(bj,bj+1).

// The number of edges is the number of indexes i,ji,j such that ai+Bj≥Xai+Bj≥X.

// This trick can also be used to calculate edges in cold regions.

// To have a more efficient solution, we must calculate faster the number of indexes i,ji,j such that ai+Bj≥Xai+Bj≥X.

// We can thus apply fast Fourier transform to arrays representing frequencies of aa and BB and multiply them, inverting the Fourier transform in order to get the answers quickly in O(1) with prefix sums.

// By doing this we can calculate the number of edges, and the number of 2×22×2 squares can be calculated in a similar way.

// The final complexity is, thus, O((n+m)log(n+m)+max(ai,bi)log(max(ai,bi)))



#include<bits/stdc++.h>

using namespace std;
#define MAX 262144
#define MAXN 1000000
long long int a[MAXN],b[MAXN];


using cd = complex<double>;
const double PI = acos(-1);
vector<cd> A(MAX),B(MAX);
vector<cd> Amx(MAX),Bmx(MAX);
vector<cd> Amn(MAX),Bmn(MAX);
vector<cd> E11(MAX),E12(MAX),E21(MAX),E22(MAX);
vector<cd> SQ1(MAX),SQ2(MAX);
vector<cd> V(MAX);
vector<long long int> A1(MAX),A2(MAX);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();

    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1) {
        double ang = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i+j], v = a[i+j+len/2] * w;
                a[i+j] = u + v;
                a[i+j+len/2] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert) {
        for (cd & x : a)
            x /= n;
    }
}
void prod(vector<cd> &a, vector<cd> &b, vector<cd> &c){
  for(int i=0;i<a.size();i++){
    c[i]=a[i]*b[i];
  }
}

int main(){
  long long int n,m,q;
  scanf("%lld %lld %lld",&n,&m,&q);
  
  for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }
  for(int i=0;i<m;i++){
    scanf("%lld",&b[i]);
  }
  for(int i=0;i<MAX;i++){
    A[i]=cd(0,0);
    Amn[i]=cd(0,0);
    Amx[i]=cd(0,0);
    B[i]=cd(0,0);
    Bmn[i]=cd(0,0);
    Bmx[i]=cd(0,0);
  }
  for(int i=0;i<n;i++){
    A[a[i]]+=cd(1,0);
  }
  for(int i=0;i<n-1;i++){
    Amn[min(a[i],a[i+1])]+=cd(1,0);
  }
  for(int i=0;i<n-1;i++){
    Amx[max(a[i],a[i+1])]+=cd(1,0);
  }
  for(int i=0;i<m;i++){
    B[b[i]]+=cd(1,0);
  }
  for(int i=0;i<m-1;i++){
    Bmn[min(b[i],b[i+1])]+=cd(1,0);
  }
  for(int i=0;i<m-1;i++){
    Bmx[max(b[i],b[i+1])]+=cd(1,0);
  }
  
  fft(A,0);
  fft(Amn,0);
  fft(Amx,0);
  fft(B,0);
  fft(Bmn,0);
  fft(Bmx,0);
  prod(A,Bmn,E11);
  prod(Amn,B,E12);
  prod(Amx,B,E21);
  prod(A,Bmx,E22);
  prod(Amn,Bmn,SQ1);
  prod(Amx,Bmx,SQ2);
  prod(A,B,V);
  fft(E11,1);
  fft(E12,1);
  fft(E21,1);
  fft(E22,1);
  fft(SQ1,1);
  fft(SQ2,1);
  fft(V,1);
  for(int i=0;i<MAX;i++){
    A1[i]=round(SQ1[i].real())-round(E11[i].real())-round(E12[i].real())+round(V[i].real());
    A2[i]=round(SQ2[i].real())-round(E21[i].real())-round(E22[i].real())+round(V[i].real());
  }
  for(int i=1;i<MAX;i++){
    A2[i]+=A2[i-1];
  }
  for(int i=MAX-2;i>-1;i--){
    A1[i]+=A1[i+1];
  }
  for(int i=0;i<q;i++){
    int query;
    scanf("%d",&query);
    //cout<<A1[query]<<" "<<A2[query-1]<<endl;
    printf("%lld\n",A1[query]-A2[query-1]);
  }
  return 0;
}