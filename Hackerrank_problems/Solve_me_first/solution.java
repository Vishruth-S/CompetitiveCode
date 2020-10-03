# Logic
# The required solution can be obtained by simply getting the integers values and adding the two values
# Scanner is used to get the input value as integer, return value must be specified to get the results of the sum of two integers

public class Solution {

    static int solveMeFirst(int a, int b) {
      // Hint: Type return a+b; below
     return a+b; 
	}

 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        a = in.nextInt();
        int b;
        b = in.nextInt();
        int sum;
        sum = solveMeFirst(a, b);
        System.out.println(sum);
	}
}