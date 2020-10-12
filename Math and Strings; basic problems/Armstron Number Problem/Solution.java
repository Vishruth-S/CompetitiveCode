import java.io.*;
import java.util.Scanner;
class armstrong
{
    public static void main()
    {
        Scanner scan=new Scanner(System.in);     
        boolean check=false;
        do
        {
            System.out.println("\fEnter a number to check wether or not it is an Armstrong Number");
            System.out.println("ENTER non 3-digit no. TO EXIT");
            int x=scan.nextInt();
            if(x<=999 && x>=100)
            check=true; 
            else
            check=false;
            int a,b,c;
            a=x/100;
            b=(x/10)-(a*10);
            c=x-(a*100)-(b*10);
            if((a*a*a)+(b*b*b)+(c*c*c)==x)
            System.out.println("Number is an armstrong number \nHit ENTER to continue");
            else
            System.out.println("Number is not an armstrong number \nHit ENTER to EXIT");
            String s=scan.nextLine();
            s=scan.nextLine();
        }while(check==true);
    }
}
