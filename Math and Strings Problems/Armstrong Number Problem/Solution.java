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
            if(x<=999 && x>=100)        //check if the given no. is 3 digit or not
            check=true; 
            else
            check=false;
            int a,b,c;
            a=x/100;                    //hundred's place
            b=(x/10)-(a*10);            //Ten's place
            c=x-(a*100)-(b*10);         //Unit's place
            if((a*a*a)+(b*b*b)+(c*c*c)==x)  //condition for armstrong no.
            System.out.println("Number is an armstrong number \nHit ENTER to continue");
            else
            System.out.println("Number is not an armstrong number \nHit ENTER to EXIT");
            String s=scan.nextLine();
            s=scan.nextLine();
        }while(check==true);   //to exit only after all required nos. are changed
    }
}
