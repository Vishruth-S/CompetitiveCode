import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args){
        int year;
        System.out.println("Enter an Year :: ");
        Scanner sc = new Scanner(System.in);
        year = sc.nextInt();sc.close();
  
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
           System.out.println("true");
        else
           System.out.println("false");
     }
}
