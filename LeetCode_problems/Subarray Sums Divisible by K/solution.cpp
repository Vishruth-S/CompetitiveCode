/* This problem can be solved using brute force in O(n^2) but that would be too slow We can use prefix sum concept to solve this problem in O(n)
we know that once we have a prefix sum array, our task boils down into choosing two prefix sums such that their difference should be divisible by k;
i.e both of those prefix sums have to be same mode k; 
Thus if we have x prefixes with same mod k then we can choose any two of them and they will satisfy our condition. so xC2 will be no of subarrays with particular mod k
The exception is with 0 mod k as we they themself are subarrays without any subtractions
*/

int subarraysDivByK (int a[], int n, int k) {
    // In this array we will store no of prefixes with particular mod k
    int mod_array[k];
    
    for(int i=0; i<k; i++) {
      mod_array[i] = 0;
      }     
    int s = 0;
    for(int i=0;i<n;i++) {
      // here we find next prefix sum and then find its mod and then increment that particular index in mod_array;
      s = (s + a[i])%k;
      mod_array[(s+k)%k]++;
      }
    int sub_arrays_div_by_k = 0;
    
    for(int i=0;i<k;i++) {
      // here we do xC2 operation for each mod;
      sub_arrays_div_by_k = sub_arrays_div_by_k + ( mod_array[i] * (mod_array[i] -1))/2;
      }
      //At last we add mod_array[0] as its an exception
    return sub_arrays_div_by_k + mod_array[0] ;
    
// Time Complexity : O(n)
// Space Complexity : O(k)
