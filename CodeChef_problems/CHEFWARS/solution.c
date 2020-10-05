//author : Soham Sarkar

#include<stdio.h>

int main(){

    long int test;
    long int power,health;
    scanf("%ld",&test);
    
    while(test){ //for each test case
    
        scanf("%ld%ld",&health,&power);
        
        while(power>0){ //while power remains, perform the operations
        
            if((health-power)>0){ 
            
                health-=power; //if health-power is > 0 then health can be reduced by power
                
            }
            
            else if((health-power)<=0){ 
            
                health=0; //if health-power<=0 then it's obvious that Chef dies as he can't attack more
                
                break;
                
            }
             
            power=power/2; //power becomes half after each attack
            
        }
        
        if(health>0 && power==0)
            printf("0\n"); //attack power becomes 0 so, chef will die hence we print 0
            
        else if(health==0 && power>0)
            printf("1\n"); //attack power is greater than 0 and health of Darth is equal to 0 hence Chef kills Darth, so, we print 1
            
        --test;
        
    }
    return 0;
}
