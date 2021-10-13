import java.util.Scanner;

public class DecimalToBinaryStack {
    static int stack[] = new int[100];
    static int top = -1;

    public static void push(int n) {
        top ++;
        stack[top] = n;
    }
    public static void pop()
    {
        for (int i = top; i >= 0; i--) {
            System.out.print(stack[i]);
        }
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number : ");
        int num = sc.nextInt();

        while (num > 0) {
            int rem = num % 2;
            push(rem);
            num /= 2;
        }
        System.out.print("Binary equivalent: ");
        pop();

    }
}
