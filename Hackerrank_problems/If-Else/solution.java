import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        if((N%2!=0)||(N%2==0 && N>=6 && N<=20))
            // checks to see is not equal to a modulus of two (odd) OR a modulus of two AND greater than or equal to 6 AND less than or equal to 20 (inclusive range)
            System.out.println("Weird");
        else 
        if((N%2==0 && N>20)||(N%2==0 && N>=2 && N<=5))
            //checks to see if equal to a modulus of 2 (Even) AND less than 20 OR equal to a modulus of 2 AND greater than or equal to 2 AND less than or equal to 5 (inclusive range)
            System.out.println("Not Weird");
        
        scanner.close();
    }
}
