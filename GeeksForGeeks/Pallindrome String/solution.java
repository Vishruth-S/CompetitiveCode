/*
This code checks of a given string is pallindroome or not. That string is same when read from both the ends.
example: abba

We need to check if frist half of string is same as the second half
Hence comparison will happen only for half the length of the string

Two pointers i and j are used.
i is the starting pointer
j points to the end of the string

first character will be compared to the last
then increment the first pointer and decrement the second pointer
and again compare the second and second to last characters
and repeat it until middle of the string is reached

*/





import java.io.*;
import java.util.Scanner;
import java.io.*;

public class solution {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        String s=in.nextLine();                   // input string 
        System.out.println(checkPalindrome(s));    //call to checkPallindrome
    }
    public static boolean checkPalindrome(String s)
    {
        int mid=s.length()/2;                //calculate half length of string
        int i=0;
        int j=s.length()-1;                  //total no.of chars in string
        while(mid>0)                         
        {
            if(s.charAt(i++)==s.charAt(j--)) //compare the first and last character and so on
            {
                mid--;
            continue;
            }
            else 
            return false;
            

        }
        return true;
    }
    
}
