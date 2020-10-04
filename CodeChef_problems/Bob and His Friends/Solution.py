

'''
Author : Shubhanshu Jain;
'''
#This is a simple problem
#Just take input of n, a, b, c and list in next line
#First we take Bob go to his room and change as minimum abs(a-b)+c
#Then we check from every room where bob can go and change


import math
import random;
from collections import defaultdict 
mod =1000000007
r1 = lambda : int(input());
rm = lambda : map(int,input().split());
rms = lambda : map(str,input().split());
rls = lambda : list(rm())

def solve():
    test = r1();
    while(test>0):
        test-=1;
        n,a,b,c=rm();
        ls = rls();
        ans=abs(a-b)+c;
        if(a>b):
            a,b=b,a;
        temp=ls[0]
        for i in ls:
            x=0
            if(i>=a and i<=b):
               temp=0;
               break;
            else:
                x=min(abs(a-i),abs(b-i));
            if(temp>x):
                temp=x;
        if(temp!=0):
            ans+=2*temp;
        print(ans);
   

def def_value(): 
	return "nan"
	
solve();

