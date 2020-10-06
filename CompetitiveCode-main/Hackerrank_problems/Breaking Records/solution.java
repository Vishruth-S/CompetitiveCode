import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    
    static int[] breakingRecords(int[] scores) {
int[] result = new int[2];
        int countMax=0, countMin=0 ,max = scores[0], min = scores[0]; //initializing max and min as 1st index of scores array
        for(int i=1; i< scores.length; i++){
           if(scores[i] > max){ max = scores[i];  countMax++; } 
            //incrementing the countMax variable which indicates how many times record broken
           if(scores[i] < min){ min = scores[i];  countMin++; }
             //incrementing the countMin variable which indicates how many times record broken
        }
        result[0] = countMax; result[1] = countMin; // adding values of max count and min count in a separate array
        return result;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] scores = new int[n];

        String[] scoresItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int scoresItem = Integer.parseInt(scoresItems[i]);
            scores[i] = scoresItem;
        }

        int[] result = breakingRecords(scores);

        for (int i = 0; i < result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write(" ");
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
