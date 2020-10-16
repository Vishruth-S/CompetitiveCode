/* Given a positive integer which fits in a 32 bit signed integer,
 find if it can be expressed as A^P where P > 1 and A > 0.
  A and P both should be integers.*/
  
  int Solution::isPower(int A) /*The function that returns appropriate output*/
  {

    if(A==1) return 1; //condition met as mentioned in problem statement
    
    for(long long int i=2;i*i<=A;i++)//start from 2 ;if start by 1 ;TLE as loop continues.
        { 
                unsigned y=2;
                unsigned p=pow(i,y);//function pow from math library
                while(p<=A && p>0)
                {   if(p==A)

                    { return 1;}
                    y++;
                    p=pow(i,y);

                }
        }
     return 0;
  }
