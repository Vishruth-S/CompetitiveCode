/*
LOGIC:
=============================================================================================================================== 
1. Since we want maximum subarray sum circularly here 
	we calculate maximum subarray sum(maxSoFar) and minimum subrray sum(minSoFar).

2. Also maintain a sum of all element of array(sum).

3. Case 1:
	Now if the `minSoFar` is equal to the `sum` of elements in the array,
	   it means all the elements in the array are negative. 
	      So we can safely return `maxSoFar` as it'll be maximum subarray sum(i.e a single max negative element).

   Case 2:
	If the `minSoFar` is not equal to the `sum` of elements in the array,
	   it means we have both positive and negative elements in the array.
	
	Eg - 1: When all negative elements are between positive elements
		 ___          ___
		[2,3,-2,-3,-1,3,5] >>> Here maximum subarray sum circularly possible is { (3) + (5) + (2) + (3) = 13 }
		 ___          ___
		We can get this maximum subarray sum by subtracting `minSoFar` from `sum` i.e { (7) - (-6) = 13 }
		
	Eg - 2: The Negatives are interleaved with positives.
		       ______
		[-2,-3,2,-1,3,-4] >>> Here maximum subarray sum circularly possible is { (2) + (-1) + (3) = 4 } which will be `maxSoFar`
		       ______
		But if we return `sum - minSoFar` here it'll be wrong answer { (-5) - (-5) = 0 }
		
	So we return maximum of (maxSoFar, sum - minSoFar).

===============================================================================================================================
	
Time Complexity: O(2n) ~= O(n), since we do 2 passes over array.
Space complexity: O(1), since no other additional memory is used apart from 5 variables.
*/
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int n = A.size();
        
        int maxSoFar = A[0], maxEndHere = A[0], sum = A[0];
        
        for(int i = 1; i < n; ++i){
            // Current maximum sum including element at index `i`
	    // Here we include element every index `i` because we want contiguous sum.
	    maxEndHere = max(maxEndHere + A[i], A[i]);
            
	    // Global maximum subarray sum which may or may not include element at index `i`.
            if(maxEndHere > maxSoFar)
                maxSoFar = maxEndHere;
            
            sum += A[i];
        }
        
        int minSoFar = A[0]; minEndHere = A[0];
        
        for(int i = 1; i < n; ++i){
	    // Current minimum sum including element at index `i`
	    // Here we include element every index `i` because we want contiguous sum.
            minEndHere = min(minEndHere + A[i], A[i]);
            
	    // Global minimum subarray sum which may or may not include element at index `i`.
            if(minEndHere < minSoFar)
                minSoFar = minEndHere;
        }
        
	// If all are negatives in the array.
        if(sum == minSoFar)
            return maxSoFar;
        
	// Refer to the LOGIC section above.
        return max(maxSoFar, sum - minSoFar);
    }
};
