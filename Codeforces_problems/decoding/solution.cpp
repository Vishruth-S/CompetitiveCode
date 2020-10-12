//The main idea of the problem is that the problem give us encoded string and it should be returned to the original form
//the method of encoding is that we get the middle character of the string and add make it the first character,and delete it from the string
//then we repeat this operation and move the char from the middle to be second char then third and so on..
//then we will reach to specific string differs from the original,our problem is that we are given the encoded string and we wanna it be back
//EX: if we have this string "volga"
//1st step we take the middle char to be in the first -> "l" and delete it from the original sring -> "voga"
//2nd step we add the middle char to be in the second -> "lo" and delete it from the original sring -> "vga"
//3rd step we add the middle char to be in the third -> "log" and delete it from the original sring -> "va"
//4th step we add the middle char to be in the third -> "logv" and delete it from the original sring -> "a"
//5th step we add the middle char to be in the third -> "logva" and delete it from the original sring -> "" , then we are done
//now our role begins to return it to original form with our encoding method!
//we wanna turn "logva" => "volga" ,*notation*:give yourself sometime to discover it!

//so we wiil find that
//1st step we take the 1st char to be in the first -> "l" and delete it from the original sring -> "ogva"
//2nd step we add the 1st char to be in the first as -> "ol" and delete it from the original sring -> "gva"
//3rd step we add the 1st char to be in the third as -> "olg" and delete it from the original sring -> "va"
//4th step we add the 1st char to be in the first -> "volg" and delete it from the original sring -> "a"
//5th step we add the 1st char to be in the fourth -> "volga" and delete it from the original sring -> "" , then we are done

//the main idea that we work always with the first element of the encoded string to return it back as original
//and we swap the steps one to be in the back and one time in the front
//Happy coding!
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  //define length vriable
    cin>>n; //tajing length vriable
    string s,s1;  //define two strings
    cin>>s; //taking the cncoded string
    s1=s[0]; //start transform it to the original form
    if(n%2==0){ //we check if the length is even
        for(int i=1;i<n;i++){ //we loop through the string elements of the endcoded one
            if(i%2!=0) s1+=s[i];  //we add it in the second and swap this step it the next iteration
            else s1=s[i]+s1;  //we add it in the first and swap this step it the next iteration
        }
    }
    else{
        for(int i=1;i<n;i++){//the same as even but with different coditions to start with te right condition only
            if(i%2==0) s1+=s[i];
            else s1=s[i]+s1;
        }
    }
    cout<<s1;
}
