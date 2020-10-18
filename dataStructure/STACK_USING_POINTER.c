#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
    void push();
    void pop();
    void traverse();
    void peep();
struct stack{
	int item;
	struct stack *next;
};

typedef struct stack st;
st *top =NULL,*start=NULL;




void push(){
	 st *temp;
	 
	 int x;
	 
	 printf("ENTER A NO. FOR INSERTION INTO STACK :");
	 scanf("%d",&x);
	 
	 temp=(st *)malloc(sizeof(st));
	 temp->item=x;
	 temp->next=NULL;
	 
	 if(top==NULL){
	 	top=temp;
	 	start=temp;
	 }
	 else{
	 	top->next=temp;
	 	top=temp;
	 	
	 }	
}

void pop(){
	int x;
	st *temp;
	
	if(top==NULL){
		printf("\nSTACK IS ALREADY EMPTY !!!");
		exit(0);
	}
	else{
		x=top->item;
		temp=start;
		while(temp->next->next!=NULL){
			temp=temp->next;
			
		}
			free(top);
			top=temp;
			top->next=NULL;
			printf("\n%d IS POPPED OUT !\n",x);
	}
	
}
void peep(){
	st *temp;
	int pos,x,i=1;
	
	if(top==NULL){
		printf("\nSTACK IS ALREADY EMPTY !!");
		exit(0);
	}
	else{
		printf("\nENTER THE POSITION NO FROM WHERE YOU WANT TO PEEP :");
		scanf("%d",&pos);
		
		while(i<pos){
			temp=temp->next;
		}
		x=top->item;
	    temp=start;
	    
	}
	
}
 void traverse(){
 	st *temp;
 	if(start==NULL){
 		printf("\nSTACK IS EMPTY !!!!\n");
 		
	 }
	 else{
	 	temp=start;
	 	while(temp!=NULL){
	 		printf(" %d ",temp->item);
	 		temp=temp->next;
		 }
	//	printf(" %d ",temp->item); 
	 }
 	
 }




	
int main(){
	
	int i;

	
	printf("STACK USING POINTERS WITH DYNAMIC MEMORY ALLOCATION !!!!");
	do{
		printf("\nENTER 1. FOR PUSH");
		printf("\nENTER 2. FOR POP");
		printf("\nENTER 3. FOR TRAVERSE");
		printf("\nENTER 4. FOR EXIT");
		printf("\nENTER YOUR CHOICE:-");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				push();
				break;
         	case 2:
		    	pop();	
		    	break;
		    case 3:
			    traverse();
				break;
			case 4:
			     printf("END OF STACK !!!");
				 break;	
			default:
			printf("INVALID !!!!!"); 	
		}
		
		
	}while(i!=4);
	
	return 0;
	
}


