//Author @ArjunBhandari.666
//github.com/ArjunBhandari-666
//alternative solution to problem 4 irrespective of case input
import java.io.*;
import java.util.Scanner;
class fibonacci
{
    public static void main()
    {
        Scanner scan=new Scanner(System.in);     
        System.out.println("\fEnter a number to check");
        int x=scan.nextInt(),a=1,n;     //using 3 variables, namely 'i','a',and 'n' to exchange term values
        for(int i=2;i<99999;i=n)
        {
            n=i+a;      // next term
            if(x==a)    //given input matches a fibonacci term
            {                
                System.out.println("Fibbonaci continuation is \n"+a+"\t"+i+"\t"+(a+i)+"\t"+((a+i)+i)+"\t"+(((a+i)+i)+(a+i))+"\t"+((((a+i)+i)+(a+i))+((a+i)+i)));
                n=99999;             
            }
            if(i>x && x!=a)     //exits loop since once x exceeds given value, there's no point in comparing with a
            {
                System.out.println("NOT A FIBONACCI TERM");
                n=99999;
            }
            a=i;        //updating previous term
        }
    }
}
