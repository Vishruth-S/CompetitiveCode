/*
AUTHOR: github.com/Sanjay235
LOGIC:
================================================================================================
1. For every level `i` we get the corresponding number for both version strings
	by iterating untill a '.' dot delimiter is encountered.
	
2. Now we check if number for either version strings is greater than other and 
	return accordingly.
	
3. Reset the numbers of level `i` if both version numbers are equal.

4. Continue traversal till the end of both of version strings.

5. If at anytime either of them is not greater than the other it means both are equal.
================================================================================================

Time complexity: O(n + m), where n - length of string `version1`, m - length of string `version2`

Space complexity: O(1), since no additional varibles are used apart 2 varibles.
================================================================================================
*/
class Solution {
public:
    int compareVersion(string version1, string version2) {
        
	// Get the length of each version strings.
        int n1 = version1.length(), n2 = version2.length();
		
	// Maintain variables for corresponding level number in each version string.
        int num1 = 0, num2 = 0;
        
	// Pointers for iterating two version strings.
        int i = 0, j = 0;
        
	// Continue iterating till each of the version strings are traversed completely.
        while(i < n1 || j < n2){
            
	    // Get the number for current level `i` of version string - 1.
            while(i < n1 && version1[i] != '.'){
                num1 = num1 * 10 + version1[i]-'0';
                ++i;
            }
			
	    // Get the number for current level `i` of version string - 2.
            while(j < n2 && version2[j] != '.'){
                num2 = num2 * 10 + version2[j]-'0';
                ++j;
            }
			
	    // If at anytime number for level `i` of version1 is greater than
	    // number for level `i` of version2, 
	    // then we can safely return `1` version1 is greater than version 2.
            if(num1 > num2) 
                return 1;
            
	    // If at anytime number for level `i` of version1 is less than
	    // number for level `i` of version2, 
	    // then we can safely return `-1` i.e version1 is less than version 2.
            if(num1 < num2) 
                return -1;
			
            // Reset the numbers for next level `i+1`
            num1 = num2 = 0;
            
	    // Move ahead for next level number comparision.
            ++i, ++j;
        }
		
	// We return 0 since the numbers at all levels of version1 and version2 are same.
	// i.e both version are same.
        return 0;
    }
};
