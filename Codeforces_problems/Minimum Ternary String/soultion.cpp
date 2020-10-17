//The main idea of the problem is that you are given string consists of "0","1" and "2" only
//the main idea of the problem that we want to make this string lexicographically bigger as much as possible
//the rules is you could only swap two adjacent elements and this elements could be "0,1" or "1,2" but not "0,2"
//so as a result you could understand that number 1 could be swapped by 0 or 2 
//then all what we need is to count number of ones in the strings and put it before the first "2" in the string , why?
//as we could swap ones with any number but 2 couldn't be swapped with zero , so it's clear that if after the first "2" any zero so we couldn't do anything about it
//but if the zero is before two it could be swapped by one so that we will put ll the ones before the first "2"
#include <iostream>
#include <vector>
#include<algorithm>	//including the needed libraries
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);	//make the input output operation is fast as possible
	int cnt = 0, index = 0;	//declare the variables
	string s, s1;	//declare the needed strings
	cin >> s;	//take the input as string
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1')   cnt++;	//iterate over the string to count the number of ones
		else   s1 += s[i];	//else we will put the string the same as it was
	}
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == '0')  index++;	//then we trying to get the index that exactly before the first "2"
		else break;
	}
	string s2(cnt, '1');	//we make the string of ones with the number we counted above
	s1.insert(index, s2);	//we insert the string of ones before the first "2"
	cout << s1 << endl;	//then we print the resulting string out
	return 0;
}
//Happy Coding :))
