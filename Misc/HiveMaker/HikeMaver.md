# Hive Maker
## Problem
So, you are someone who creates hives using hexagons. Hives are created using sticks, and they also give you sticks. They said that you have to make the most out of it, but on the same time, make sure that the hive does not have any incomplete hexagons.
## Input
Your function is supposed to be named ```HiveMaker()```. You will be given one parameter, being ```the number of sticks you are given.```

## Output
Return an array consisting of: ```How many hexagons you made, How many sticks were used, Leftover sticks.``` The array should be *in order*.

## Sample Test Cases
- ```HiveMaker(7)```, returns [1, 6, 1]
- ```HiveMaker(19)```, returns [4, 19, 0]
- ```HiveMaker(23)```, returns [5, 23, 0]
- ```HiveMaker(54)```, returns [12, 54, 0]

For the first testcase, it returns [1, 6, 1] because 1 hexagon may be formed with 6 sticks, then 1 stick leftover.
For the second testcase, it returns [4, 19, 0] because 4 hexagons may be formed with 19 sticks, then 0 will be leftover.

### Create code, that has a runtime of anytime, but has to be able to accommodate literally any number.
