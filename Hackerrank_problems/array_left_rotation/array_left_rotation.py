n , k = list(map(eval , input().split())) # n = Size of array , k = rotating number
lis = list(map(eval , input().split()))   # Initial array

rotated_array = []

# Initially appending 0's to rotated array
for i in range(len(lis)):
    rotated_array.append(0)

# CORE LOGIC
# Here i have used modulos operator to create a cyclic nature
for i in range(len(lis)):
    rotated_array[i] = lis[(i + k) % len(lis)]

# Printing the final rotated array 
for i in range(len(lis)):
    print(rotated_array[i] , end = " ")
