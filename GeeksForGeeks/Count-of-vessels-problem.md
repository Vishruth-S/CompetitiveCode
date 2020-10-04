
#Count of vessels completely filled after a given time


Given two integers N and T denoting the number of levels and the number of seconds respectively, the task is to find the number of completely filled vessels after T seconds under given conditions:

    A structure of vessels of N levels is such that the number of the vessels at each level is equal to the level number i.e 1, 2, 3, … up to N.
    Each vessel can store a maximum of 1 unit of water and in every second 1 unit water is poured out from a tap at a constant rate.
    If the vessel becomes full, then water starts flowing out of it, and pours over the edges of the vessel and is equally distributed over the two connected vessels immediately below it.

Assumptions:

    All the objects are arranged symmetrically along the horizontal axis.
    All levels are equally spaced.
    Water flows symmetrically over both the edges of the vessel.

Examples:

    Input: N = 3, T = 2
    Output: 1
    Explanation:
    View of Structure with N = 3 and at a time T = 2 after the tap has been opened
    
    <img style="float: right;" src="assets/out.png" alt="example" />
Input: N = 3, T = 4
Output: 3
Explanation:
View of Structure with N = 3 and at a time T = 4 after the tap has been opened
<img style="float: right;" src="assets/out2.png" alt="example" />
More Explanation :
Naive Approach: The simplest approach to solve the problem is to check if it is possible to completely fill x vessels in T seconds or not. If found to be true, check for x+1 vessels and repeat so on to obtain the maximum value of x.
Time Complexity: O(N3)
Auxiliary Space: O(1)

Efficient Approach: 
The above approach can be optimized using Dynamic Programming. Follow the steps below to solve the problem:

    Store the vessel structure in a Matrix, say M, where M[i][j] denotes the jth vessel in the ith level.
    For any vessel M[i][j], the connected vessels at an immediately lower level are M[i + 1][j] and M[i + 1][j + 1].
    Initially, put all water in the first vessel i, e. M[0][0] = t.
    Recalculate the state of the matrix at every increment of unit time, starting from the topmost vessel i, e. M[0][0] = t.
    If the amount of water exceeds the volume of the vessel, the amount flowing down from a vessel is split into 2 equal parts filling the two connected vessels at immediately lower level.
