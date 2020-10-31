class Solution {
    double answer=0;
public:
    //this function is used to find median of a single array(1-D)
    
    double getMedianFromOneArray(vector<int>& nums, int &len){
        //middle element as the median for vector of even length
        if(len&1) return nums[len/2];
            
            int mid2=len/2;
            int mid1=mid2-1;
            
        //logic where we choose average of the two middle and middle-1 element for odd length vector
            return (    ((double) nums[mid1]) + ((double) nums[mid2])  )/2;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len2=nums2.size();
        int len1=nums1.size();
        
        //Below two if conditions handle the trivial cases when one vector is of zero size(means logically does          not exist)
        if(nums1.size() == 0){    
            answer = getMedianFromOneArray(nums2,len2);
            return answer;
        }
        if(nums2.size() == 0){
            answer = getMedianFromOneArray(nums1,len1);
            return answer;
        }
        
        
        
        int total = len1 + len2;
        int middle = total/2;
        int i=0;
        int j=0;
        
        vector<int> merge;
        
        //Here we create a new vector where we merge the two vectors
        while(i<len1 && j<len2){
            
            //Allocation of smallest number out of two vectors in our resultant vector
            if(nums1[i]<=nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        
        //the two vectors can also be of unequal length, hence through the below steps we ensure that none of the elements from the vectors remains left
        while(i<len1) {merge.push_back(nums1[i]);i++;}
        while(j<len2) {merge.push_back(nums2[j]);j++;}
        
        
        //logical calculation of median from our merged vector
        if(total&1){
            answer = merge[middle];
        }
        else{
            answer = (((double) merge[middle])+((double) merge[middle-1]))/2;
        }
    return answer;
    }
};