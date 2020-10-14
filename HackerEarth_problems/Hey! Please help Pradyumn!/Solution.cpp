/* 
this is TRIE PROBLEM and in this TRIE is made From String and when a particular String is Searched Then At the end of it dfs is called 
so that all the required string with Prefix is Printed.
*/

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
class trienode                    //STRUCTURE OF TRIE CONTAINING 2-D CHARACTER MATRIX AND VARIABLE END
{
  public:
  trienode** children;
  int end;
  trienode()
  {
      children=new trienode*[26];
      for(int i=0;i<26;i++)
      {
          children[i]=NULL;
      }
      end=1;
  }
};
 
void insert(string s,trienode* root)              //INSERTION OF ALL STRINGS IN TRIE
{
    trienode* curr=root;
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        if(!curr->children[index])
        {
            
            curr->children[index]=new trienode();
        }
        curr=curr->children[index];
       
    }
    curr->end=0;
}
 
void dfs(trienode* root,string s)                  //DFS TO EXPLORE ALL THE STRINGS FROM END OF PREFIX
{
    if(root->end==0)
        cout<<s<<endl;
    for(int i=0;i<26;i++)
    {
        char ch=char(i+97);
        if(root->children[i])
        {
            dfs(root->children[i],s+ch);
        }
    }
}
 
bool searchall(string s,trienode* root)        //SEARCHINF FOR PREFIX 
{
    trienode* curr=root;
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        if(!curr->children[index])
        {
            return false;
        }
        else
        {
            curr=curr->children[index];
        }
    }
    dfs(curr,s);
    return true;
}
int main()
{
	int t,q;
	cin>>t;
	trienode* root=new trienode();
	while(t--)
	{
	    string s;
	    cin>>s;
	    insert(s,root);
	}
	cin>>q;
	while(q--)
	{
	    string ss;
	    cin>>ss;
	    if(!searchall(ss,root))
	    {
	        cout<<"No suggestions"<<endl;
	        insert(ss,root);
	    }
	}
	return 0;
}
