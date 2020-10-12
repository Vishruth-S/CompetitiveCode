/*
this is a Typical TRIE problem as it envolves prefix calculation of string .
Make a trie for given String and Also maintain a count of Every character means that string Appears that number of time.
for that prefix max. number of times prefix cmt.
*/

#include<bits/stdc++.h>
using namespace std;
 
class trienode{
public:
	trienode** child;
	int x;
	trienode(){
		child=new trienode*[26];
		for(int i=0;i<26;i++){
			child[i]=NULL;
		}
		x=0;
	}
};
 
void insert(string s,trienode* head){
	trienode* curr=head;
	for(int i=0;i<s.length();i++){
		int m=s[i]-97;
		if(!curr->child[m]){
			curr->child[m]=new trienode();
		}
		curr=curr->child[m];
		curr->x+=1;
	}
}
 

void search(string s,trienode* head){
	trienode* curr=head;
	for(int i=0;i<s.length();i++){
		int m=s[i]-97;
		if(!curr->child[m]){
			cout<<0<<endl;
			return;
		}
		else{
			curr=curr->child[m];
		}
	}
	cout<<curr->x<<endl;
}
int main(){
	int n;
	cin>>n;
	trienode* head=new trienode();
	while(n--){
		string a,b;
		cin>>a>>b;
		if(a=="add"){
			insert(b,head);
			
		}
		else {
			search(b,head);
		}
	}
}
