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