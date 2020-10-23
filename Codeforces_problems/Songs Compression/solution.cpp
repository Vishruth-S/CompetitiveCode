#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long int n, m, x=0, y=0, aux=0, con=0;
	cin >> n >> m;
	long long int a[n], b[n], c[n];
	for(int i=0; i<n; i++){
		cin >> a[i] >> b[i];
		y+=b[i]; //y=tamanho das músicas totais após a compressão 
		c[i]=a[i]-b[i]; //diferença do tamanho da música após a compressão e inicialmente
		x+=a[i]; //x=total song size initially
		y+=b[i]; //y=total song size after compression
 
		c[i]=a[i]-b[i]; //difference in music size after compression and initially
	}
 
	if(y>m){
		cout << "-1";
		return 0;
	}
	else{
		sort(c, c+n); //Put the difference in ascending order
		n--;
		while(x>m){
			x-=c[n];
			n--;
			con++;
		}
	}
 
	cout << con;
 
    return 0;
}