#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
/* 
	This program transforms an algebraic expression to Reverse Polish Notation.
	(a+(b*b)) => abc*+
	To solve this, we are going to use stack for operators and print operands whenever it occurs.
	Input already has opening and closing brackets (), which will not be printed in the result.
*/

void rpn(string str, int n){
	stack<char>s;
	for(int i=0;i<n;i++){
		if(str[i] == '('){	//Ignore opening brackets
			continue;
		}
		else if(str[i]>='a' && str[i]<='z'){
			cout<<str[i];	//Print Operands
		}
		else if(str[i] == '+' || str[i] == '*' || str[i] == '-' || str[i] == '/' || str[i] == '^'){


			s.push(str[i]);	//Store operators in stack
		}
		else if(str[i] == ')'){
			cout<<s.top();	//Print the top most operator from stack whenever closing brackets occur
			s.pop();	//remove operators from stack.
		}
	}
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int n = str.length();
		rpn(str,n);		//Method to tranform algebraic exp to Reverse Polish Notation (Infix to Postfix)
		cout<<endl;
	}
	return 0;
}
