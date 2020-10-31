//@shivam23rawat

/* ------------LOGIC----------------
Use a flag variable to check if 1 is encountered before 6 spaces, initialise it as 0
On encountering a 1 in the array, that is when the first person is detected in the iterating loop
store the position then use a nested loop to check the next 6 positions from it, if a 1 is 
encountered then set the flag variable to 1 signifying that social distancing is not being followed
Lastly check if flag is changed, if so then print the answer as "NO" else "YES".
*/

#include <stdio.h>

int main(void) 
{
	int test;
	scanf("%d",&test); 
	while(test)
		{
			test--;
			int a[100]; //initializing an array to signify the queue 
			int i=1; //iterating variable for array starts from 1 as spots are labelled 1 to N
			int spots=0; //variable to signify how many places are there to stand
			int occ=0; //flag variable to signify if that atleast one spot is occupied (check constraints)
			int j=0; //iterating variable to next 6 spots from the chosen spot
			int flag=0; //flag variable to signify whether condition is met or not
			scanf("%d",&spots);
			for(i=1;i<=spots;i++)
				{
					scanf("%d",&a[i]);
					if(a[i]==1) //explicitly checking constraints(not necessary)
						occ=1;
					if(a[i]>1||a[i]<0) //explicitly checking constraints(not necessary)
						return;
				}
			if(occ==0)
				return;
			for(i=1;i<=spots;i++) //selecting each spot in the queue one by one 
				{
					if(a[i]==1) //if the spot is filled then only proceed
						{
							for(j=i+1;j<i+6&&j<=spots;j++) //check if the next 6 spots are empty or not
								{
									if(a[j]==1) 
										flag=1;	//found a filled spot prematurely
									
								}
						}
				}
			if(flag==1) //if filled spot was found prematurely
						printf("NO\n");
				
			if(flag==0) //if people in queue follow protocol
						printf("YES\n");
		}	
	return 0;			
}

