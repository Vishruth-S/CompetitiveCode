Link to the problem statement : https://cses.fi/problemset/task/1090
------------------------------------------------------------------------------------------------------------------
Please visit the link for the problem and then try it youself then watch the solution.
-----------------------------------------------------------------------------------------------------------------
Approach :
--------------------------------------------------------------------------------------------------------------------------------
we must initialize a variable count the keeps the track of minimum godolas required
First we must sort the array in non-decreasing order
After that, as the gondola must not exceed its weight limit x , we take one element from the front and other from the back and add them.
If the addition exceeds x(the limit) we must ignore and move to second element and so on and increment the count.
Else increment the count and move the one step forward to the next element fron front and back.


Ultimately print the count variable which stores the number of gondolas required.
