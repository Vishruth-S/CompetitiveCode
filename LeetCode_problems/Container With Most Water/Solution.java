class Solution {
    public int maxArea(int[] height) {
        int i=0,j=0,k=0,mul=0;
        j=height.length-1;
        while(i<j){
            mul=(j-i)*Math.min(height[i],height[j]); //find min height from array using positions i and j and
            //multiply it with the difference bet i and j (the base of container)
            if(mul>k){
                k=mul; //if it is greater than present, replace
            }
            else{ // if not move ahead depending on which height is lowest, eliminate that position and move ahead/backward
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        return k;
    }
}