#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    
int i,j,sum;
int n,f;
int arr[100];
cin>>n;
cin>>f;

for(i=0;i<n;i++){
	
cin>>arr[i];
}
for(i=0;i<n;i++){
	sum = arr[i];
	for(j=i+1;j<n;j++){
		
		sum=sum+arr[j];
		
		if(sum==f){
			cout<<i<<endl;
			cout<<j;
			break;
		}
		else
			continue;
		
	}
}	


	return 0;
}
