#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
	void insert();
	void del();
	void traverse();

struct circular_queue{
	int data;
	struct circular_queue *Next;
};
typedef struct circular_queue CQ;
CQ *front=NULL,*rear=NULL;

void insert(){
    int item;
    CQ *temp;
    printf("\nENTER A DATA :");
    scanf("%d",&item);
    temp=(CQ *)malloc(sizeof(CQ));
    temp->data=item;
    temp->Next=NULL;
    
   if(rear==NULL){
    	rear=temp;
    	front=temp;
    
	}
	else{
		rear->Next=temp;
		rear=temp;
		
	}
}

void del(){
	
	CQ *temp;
	int item;

    if(front==NULL){
    	printf("CQ IS ALREADY EMPTY !!!!");
    	return;
	}
	else{
		item=front->data;
		temp=front->Next;
		free(front);
		front=temp;
		printf("\n%d is deleted !\n",item);
	}	
}

void traverse(){
	CQ *temp;
	if(front==NULL){
		printf("\nCQ IS EMPTY !!!");
		return;
	}
	else{
		temp=front;
		printf("\nCQ ELEMENTS ARE :  ");
		while(temp!=NULL){
			printf("%d <<< ",temp->data);
			temp=temp->Next;
		}
	}
	
}



int main(){

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
					printf("\nINVALID CHOICE !!!!");
					break;
				           	
			   }
	   	
	   }while(x!=4);
	   
	   return 0;
	
}


