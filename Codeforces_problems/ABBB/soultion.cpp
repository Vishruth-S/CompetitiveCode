//the main idea is that we gonna find a new string after deleting "AB" or "BB"
//so we gonna find them and delete them and prit the length of the result string
#include<iostream> 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);//make input output operation faster
	int t; cin >> t;	//take the input
	while (t--)
	{
		string s;
		cin >> s;	//take the input as string	
		for (int i = 1; i < s.length(); i++) {
			if ((s[i] == 'B' && s[i - 1] == 'A') || (s[i] == 'B' && s[i - 1] == 'B')) {	//iterate over the string to find a "AB" or "BB"
				s.erase(s.begin() + i - 1, s.begin() + i + 1);	//delete them 
				i -= 2;	//make the counter smaller 
			}
		}
		cout << s.size() << endl;	//printing the length of the string
	}
	return 0;
}
//Happy Coding :))
