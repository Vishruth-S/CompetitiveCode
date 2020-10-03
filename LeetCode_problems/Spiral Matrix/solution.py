#Logic:
#First, four variables containing the indices for the corner points of the array are initialized.
#The algorithm starts from the top left corner of the array, and traverses the first row from left to right. 
#Once it traverses the whole row it does not need to revisit it, thus, it increments the top corner index.
#Once complete, it traverses the rightmost column top to bottom. Again, once this completes,
#there is no need to revisit the rightmost column, thus, it decrements the right corner index.
#Next, the algorithm traverses the bottommost row and decrements the bottom corner index afterward.
#Lastly, the algorithm traverses the leftmost column, incrementing the left corner index once it’s done.
#This continues until the left index is greater than the right index, and the top index is greater than the bottom index.


class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []
        
        start_row = 0
        start_col = 0
        end_row = len(matrix)
        end_col = len(matrix[0]) 
        output = []
        
        while(start_row<end_row and start_col<end_col):
            for i in range(start_col,end_col):
                output.append(matrix[start_row][i])    
            start_row+=1
            
            for j in range(start_row,end_row):
                output.append(matrix[j][end_col-1])    
            end_col-=1
            
            if(end_row<=start_row):
                break
                
            for k in range(end_col-1,start_col-1,-1):
                output.append(matrix[end_row-1][k])    
            end_row-=1
            
            if(end_col<=start_col):
                break
                
            for l in range(end_row-1,start_row-1,-1):
                output.append(matrix[l][start_col])     
            start_col+=1
            
        return output