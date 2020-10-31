# SPARSE MATRIX MULTIPLICATION

## Problem

Given 2 [sparse matrices](https://en.wikipedia.org/wiki/Sparse_matrix), Convert them into their triple form representaion and find their product using this. Print the product in triple form


## Input format
first line input number of rows(m1) and columns(n1) of matrix1     
Second line input number of rows(m2) and columns(n2) of matrix2     
Third line contains m1xn1 space seperated integers = elements of matrix1     
Fourth line contains m2xn2 space seperated integers = elements of matrix2      

## Output format
Print the triple representation of the product of the two sparse matrices.    
If the dimensions don't match for calculating product, print "Cannot multiply"   

## Constraints
* All triple form representations MUST be sorted Row-wise ascending (as in examples below)   
* The code for multiplication must be strictly using the triple form. DIRECT MULTIPLICATION of given matrices is NOT ALLOWED.  


### For example: Consider the given input   
### Example 0
Input
```
3 3
3 3
1 0 0 0 4 5 3 0 0
0 3 0 1 0 4 0 2 0
```

 
Output: product of 2 given matrices in triple form:   
```
ROW  COL  VALUE
1    2     3
2    1     4
2    2     10
2    3     16
3    2     9
```

Explanation   
The given input is:    
matrix 1 (3 X 3)
```
1 0 0
0 4 5
3 0 0
```

matrix 2 (3 X 3)
```
0 3 0 
1 0 4
0 2 0
```

The triple representation takes into account only non-zero elements   
The triple representaion would be (row, col, value) in a 1-based index   
For eg, in matrix 1, the element 5 is in the second row and third column    
Hence it will be represented as <2,3,5>.   
Similarly all non-zero elements can be represented in the triple as:   

Triple form of matrix 1
```
ROW  COL  VALUE
1    1     1
2    2     4
2    3     5
3    1     3
```

Triple form of matrix 2
```
ROW  COL  VALUE
1    2     3
2    1     1
2    3     4
3    2     2
```

Another 2d array may be used for this triple form. Or if you are using C/C++,  
You may use an array of struct (eg struct Sparse{int row,col,value} Sparse s[100])  

Your task is to find the product of the sparse matrices using this triple form  
The resulting product will be
```
ROW  COL  VALUE
1    2     3
2    1     4
2    2     10
2    3     16
3    2     9
```

The given triple form, when converted into normal sparse matrix yields
```
0    3     0
4    10    16
0    9     0
```

Which is the product of matrix 1 and matrix 2


## Additional examples for reference
### Example 1
Input
```
4 3
3 4
0 0 4 2 0 1 0 5 0 0 3 1
0 3 0 0 0 2 0 4 0 1 0 0
```

Output
```
product of 2 given matrices in triple form:
ROW  COLUMN  VALUE
1       2       4
2       2       7
3       2       10
3       4       20
4       2       7
4       4       12
```

Explanation  
Input matrices are:  
Matrix 1 (4 X 3)
```
0   0   4
2   0   1
0   5   0
0   3   1
```
 
Matrix 2 (3 X 4)
```
0   3   0   0
0   2   0   4
0   1   0   0
```

Triple representation of 1 is
```
ROW  COLUMN  VALUE
1       3       4
2       1       2
2       3       1
3       2       5
4       2       3
4       3       1
```

Triple representation of 2 is
```
ROW  COLUMN  VALUE
1       2       3
2       2       2
2       4       4
3       2       1
```

product of 2 given matrices in triple form:
```
ROW  COLUMN  VALUE
1       2       4
2       2       7
3       2       10
3       4       20
4       2       7
4       4       12
```

product of matrix 1 and matrix 2 is
```
0   4   0   0
0   7   0   0
0  10   0  20
0   7   0  12
```
Which is represented in the triple form


### Example 2
Input
```
2 3
2 4
0 0 3 4 0 1
1 0 0 0 4 0 1 5
```
Output
```
Cannot Multiply
```

Explanation  
The given Dimensions don't support multiplication


## Note
As mentioned in the constraints, any code/logic must involve strictly using the triple form for multiplication.  
DIRECT MULTIPLICATION of given matrices is NOT ALLOWED.  
