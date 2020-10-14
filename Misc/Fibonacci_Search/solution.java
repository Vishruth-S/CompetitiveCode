/*
Algorithm:
Let the searched element be x.

The idea is to first find the smallest Fibonacci number that is greater than or equal to the length of given array. Let the found Fibonacci number be fib (m’th Fibonacci number). We use (m-2)’th Fibonacci number as the index (If it is a valid index). Let (m-2)’th Fibonacci Number be i, we compare arr[i] with x, if x is same, we return i. Else if x is greater, we recur for subarray after i, else we recur for subarray before i.

Below is the complete algorithm
Let arr[0..n-1] be the input array and element to be searched be x.

Find the smallest Fibonacci Number greater than or equal to n. Let this number be fibM [m’th Fibonacci Number]. Let the two Fibonacci numbers preceding it be fibMm1 [(m-1)’th Fibonacci Number] and fibMm2 [(m-2)’th Fibonacci Number].

While the array has elements to be inspected:
    Compare x with the last element of the range covered by fibMm2
    If x matches, return index
    Else If x is less than the element, move the three Fibonacci variables two Fibonacci down, indicating elimination of approximately rear two-third of the remaining array.
    Else x is greater than the element, move the three Fibonacci variables one Fibonacci down. Reset offset to index. Together these indicate elimination of approximately front one-third of the remaining array.
    
Since there might be a single element remaining for comparison, check if fibMm1 is 1. If Yes, compare x with that remaining element. If match, return index.
*/

// Java program for Fibonacci Search 

import java.util.*; 
  
class Fibonacci 
{    
    // Utility function to find minimum  
    // of two elements 
    public static int min(int x, int y)  
    { return (x <= y)? x : y; } 
  
    /* Returns index of x if present, else returns -1 */
    public static int fibMonaccianSearch(int arr[],  
                                         int x, int n) 
    { 
        /* Initialize fibonacci numbers */
        int fibMMm2 = 0; // (m-2)'th Fibonacci No. 
        int fibMMm1 = 1; // (m-1)'th Fibonacci No. 
        int fibM = fibMMm2 + fibMMm1; // m'th Fibonacci 
  
        /* fibM is going to store the smallest  
        Fibonacci Number greater than or equal to n */
        while (fibM < n) 
        { 
            fibMMm2 = fibMMm1; 
            fibMMm1 = fibM; 
            fibM = fibMMm2 + fibMMm1; 
        } 
  
        // Marks the eliminated range from front 
        int offset = -1; 
  
        /* while there are elements to be inspected.  
        Note that we compare arr[fibMm2] with x.  
        When fibM becomes 1, fibMm2 becomes 0 */
        while (fibM > 1) 
        { 
            // Check if fibMm2 is a valid location 
            int i = min(offset+fibMMm2, n-1); 
  
            /* If x is greater than the value at  
            index fibMm2, cut the subarray array  
            from offset to i */
            if (arr[i] < x) 
            { 
                fibM = fibMMm1; 
                fibMMm1 = fibMMm2; 
                fibMMm2 = fibM - fibMMm1; 
                offset = i; 
            } 
  
            /* If x is less than the value at index  
            fibMm2, cut the subarray after i+1 */
            else if (arr[i] > x) 
            { 
                fibM = fibMMm2; 
                fibMMm1 = fibMMm1 - fibMMm2; 
                fibMMm2 = fibM - fibMMm1; 
            } 
  
            /* element found. return index */
            else return i; 
        } 
  
        /* comparing the last element with x */
        if(fibMMm1 == 1 && arr[offset+1] == x) 
            return offset+1; 
  
        /*element not found. return -1 */
        return -1; 
    } 
      
    // driver code 
    public static void main(String[] args) 
    { 
        int arr[] = {10, 22, 35, 40, 45, 50,  
                     80, 82, 85, 90, 100}; 
        int n = 11; 
        int x = 85; 
        System.out.print ("Found at index: "+ 
                   fibMonaccianSearch(arr, x, n)); 
    } 
} 