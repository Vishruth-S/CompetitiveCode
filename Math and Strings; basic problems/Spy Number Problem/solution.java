//Author @ArjunBhandari.666
//github.com/ArjunBhandari-666
//alternative solution to problem 4 irrespective of case input
import java.io.*;
import java.util.Scanner;
class SpyNumber
{
    public static void main()
    {
        Scanner scan=new Scanner(System.in);     
        System.out.println("\fEnter a 3 digit number to check");
        int x=scan.nextInt();
        int a,b,c;              
        a=x/100;                //hundred's place
        b=(x/10)-(a*10);        //ten's place
        c=x-(a*100)-(b*10);     //unit's place
        if(a+b+c==a*b*c)
        System.out.println("Yes, it is a Spy Number");
        else
        System.out.println("NO, it's not a Spy Number");
    }
}
