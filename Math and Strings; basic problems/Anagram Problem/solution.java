//Author @ArjunBhandari.666
//github.com/ArjunBhandari-666
//alternative solution to problem 4 irrespective of case input
import java.io.*;
import java.util.Scanner;
class StringAnagrams
{
    public static void main()throws IOException
    {
        Scanner scan=new Scanner(System.in);     
        System.out.println("\fEnter two statements to compare");
        String s1=scan.nextLine(),s2=scan.nextLine();
        s1=s1.trim();           //removes extra spaces
        s1=s1.toUpperCase();    //auto conversion of all alphabets to upper case
        s2=s2.trim();
        s2=s2.toUpperCase();
        int a=s1.length(),b=s2.length(),j=b;        //returns length of the trimmed strings
        if(a>=b)
        j=a;
        int [] cmp1=new int[26];        //each index representing an alphabet from 'A' to 'Z'
        int [] cmp2=new int[26];
        int op=0;
        for(int i=0;i<a;i++)
        {
            for(int k=65;k<=90;k++)
            {
                if(s1.charAt(i)==k)
                cmp1[k-65]+=1;            //ascii value for 'A'=65 
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int k=65;k<=90;k++)
            {
                if(s2.charAt(i)==k)
                cmp2[k-65]+=1;            
            }
        }
        for(int i=0;i<26;i++) //checks if each alphabet has been used the exact same no. of times in both the strings
        {
            if(cmp1[i]==cmp2[i])            
            op+=1;  
            if(op==25)
            System.out.println("They are anagrams");
        }
        if(op!=25)
        System.out.println("NOT ANAGRAMS");
    }
}
