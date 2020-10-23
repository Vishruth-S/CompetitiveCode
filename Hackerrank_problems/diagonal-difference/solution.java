/*
 A function diagonalDifference that takes size of 2D square matrix and the matrix itself as the arguments.
 For a 2D square matrix, example of 3x3 matrix below, ythe index at particular position is represented as ij
 00 01  02
 10 11  12
 20 21  22

 The elements at the right diagonal are the ones where i == j
 The elements at the left diagonal are the ones where i+j == sizeOfMatrix -1

 The function return the absolute value of difference between sum of elements of two diagonals.
*/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static int diagonalDifference(int n,int[][] arr) {
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    left+=arr[i][j];
                if((i+j)==n-1)
                    right+=arr[i][j];
            }
        }
        return Math.abs(left-right);
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] arr = new int[n][n];

        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                arr[i][j] = sc.nextInt();

        int result = diagonalDifference(n,arr);
        System.out.println(result);
       
    }
}
