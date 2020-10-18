#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct queue{
	
	int data;
	struct queue *next;
};
typedef struct queue qu;
qu *front=NULL,*rear=NULL;

void insert(){
	qu *temp;
	int value;
	printf("ENTER A NO. FOR INSERTION INTO QUEUE :");
	 scanf("%d",&value);
	 
	 
	 temp=(qu *)malloc(sizeof(qu));
	 temp->data=value;
	 temp->next=NULL;
	 
	 if (rear==NULL)
	 {
	 	rear=temp;
	 	front=temp;
	 }
    else{
    	rear->next=temp;
    	rear=temp;
	}
	 
}

void del(){
	int item;
	qu *temp;
	
	if(front ==NULL){
		printf("EMPTY");
		return;
	}
	else{
		item=front->data;
		temp=front->next;
		free(front);
		front=temp;
		printf("%d is deleted !!\n",item);
	}
}
void traverse(){
	qu *temp;
	if(front==NULL){
		printf("QUEUE IS EMPTY !!");
	}
	else{
		temp=front;
		printf("ELEMENTS IN QUEUE !!");
		while(temp->next!=NULL){
			printf(" %d ",temp->data);
			temp=temp->next;
			
		}
		printf(" %d ",temp->data);
	}
	
}


int main(){
	void insert();
	void del();
	void traverse();
	int x;
	
	 printf("             QUEUE OPERATIONS !!!!!!");
	   do{
	   	    printf("\nENTER 1. FOR INSERT");
	   	    printf("\nENTER 2. FOR DELETE");
	   	    printf("\nENTER 3. FOR TRAVERSE ");
	   	    printf("\nENTER 4. FOR EXIT ");	   	    
	   	   
	   	    printf("\n\nENTER YOUR CHOICE :");
	   	    scanf("%d",&x);
	   	    
	   	    switch(x){
	   	    	
	   	    	case 1:
	   	    		insert();
	   	    		break;
	   	    	case 2: 
				   del();
				   break;
				case 3:
				   traverse();
				   break;
				case 4:
		           	 printf("End of QUEUE");
		         	break; 	
 	 				   
				default:
					printf("\nINVALID OPERATION !!!!");
					break;
				           	
			   }
	   	
	   }while(x!=4);
	   
	   return 0;
	
}




/*Algorithm to ADD Element in QUEUE
==================================

step 1-start
step 2- struct Queue *temp
step 3- accept data into node->data
step 4- set node->next=NULL
step 4- if[rear==NULL]
           	rear=temp;
	 	   front=temp;
           
step 4- end if
step 5-REAR->next=temp
step 6-rear =node
stop 7-stop


ALGORITHM TO DELETE THE ELEMENT FROM QUEUE:
=============================================

step 1-start
step 2- struct Queue *temp
step 3-if FRONT == NULL then
           display "EMPTY"
    
step 4- end if
step 5- x= front->data
step 6-temp=front->next
step 7-  free(temp)
step 8-front=temp
        
step 9-dispay N is deleted
step 10 stop

*/



