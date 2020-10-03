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