#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void Insert();
void AtBeg();
void AtEnd();
void Display();
void Before_any_node();
void After_any_node();
void At_specific_place();
void del_from_beg();
void del_at_end();
void del_before();
void del_after();
void del_at_pos();
void Delete();
void Node();
void Edit();
void Reverse();
struct linkedlist{
	int number;
	struct linkedlist *Next;
};
struct linkedlist *start;

void AtEnd(){
	
	struct linkedlist *node,*temp;
	node=(struct linkedlist *)malloc(sizeof(struct linkedlist));
	printf("\nEnter Element at the End:");
	scanf("%d",&node->number);
	node->Next=NULL;
	if(start==NULL){
		start=node;
		return;
	}
	temp=start;
	while(temp->Next!=NULL){
		temp=temp->Next;
	}
	temp->Next=node;
	
}

void AtBeg(){
	  struct linkedlist *node,*temp;
	  node=(struct linkedlist*)malloc(sizeof(struct linkedlist));
	  printf("\nEnter Element at the Beginning:");
	  scanf("%d",&node->number);
	  node->Next=NULL;
	  
	  if(start==NULL){
	  	start=node;
	  	return;
	  }
	  else{
	  	temp=start;
	  	start=node;
	  	node->Next=temp;
	  }
	
}
void Before_any_node(){
	int value;
	struct linkedlist *temp,*temp1,*node;
	printf("\nBefore which node you wanna Insert:");
	scanf("%d",&value);
	
	node=(struct linkedlist*)malloc(sizeof(struct linkedlist));
	printf("Enter the value:");
	scanf("%d",&node->number);
	node->Next=NULL;
	
	temp=start;
	while(temp->number !=value){
		temp1 = temp;
		temp=temp->Next;
	}
	temp1->Next=node;
	node->Next=temp;
	
}
void After_any_node(){
	int value;
	struct linkedlist *temp,*node;
	printf("\nAfter which node you wanna Insert:");
	scanf("%d",&value);
	
	node=(struct linkedlist*)malloc(sizeof(struct linkedlist));
	printf("Enter the value:");
	scanf("%d",&node->number);
	node->Next=NULL;
	
	temp=start;
	while(temp->number !=value){
		
		temp=temp->Next;
	}
	node->Next=temp->Next;
    temp->Next=node;
	
}

void At_specific_place(){
	
	int po_num,counter=0,i=1;
	struct linkedlist *temp,*temp1,*node;
	printf("\nEnter the position Where you wanna Insert a Node:");
	scanf("%d",&po_num);
	
	node=(struct linkedlist*)malloc(sizeof(struct linkedlist));
	printf("Enter the value:");
	scanf("%d",&node->number);
	node->Next=NULL;
	
	temp=start;
	while(temp!=NULL)
	{
		counter=counter+1;
		temp=temp->Next;
	}
	if(counter<po_num){
		printf("This is Invalid Position");
		return;
	}
	temp=start;
	while(i<po_num){
		i=i+1;
		temp1=temp;
		temp=temp->Next;
	}
	temp1->Next=node;
	node->Next=temp;
	
}


void del_from_beg(){
	
	struct linkedlist *temp;
	temp=start;
	start=start->Next;
	free(temp);
}

void del_at_end(){
	struct linkedlist *temp,*temp1;
	temp=start;
	while(temp->Next!=NULL){
		temp1=temp;
		temp=temp->Next;
	}
	temp1->Next=NULL;
	free(temp);
	
}
void del_before(){
	int i;
	struct linkedlist *temp,*temp1,*temp2;
	printf("\nBefore which node You wanna Delete :");
	scanf("%d",&i);
	
	temp=start;
	temp1=temp->Next;
//	temp1=temp;
	temp2=temp1->Next;
	
	while(temp2->number!=i){
		temp=temp->Next;
		temp1=temp->Next;
		temp2=temp1->Next;
	}
	temp->Next=temp2;
	temp1->Next=NULL;
	free(temp1);
	
}

void del_after(){
	
	int i;
	struct linkedlist *temp,*temp1,*temp2;
	printf("\nAfter which node You wanna delete :");
	scanf("%d",&i);
	temp=start;
	temp1=temp->Next;
	temp2=temp1->Next;
	while(temp->number!=i){
		temp=temp->Next;
		temp1=temp->Next;
		temp2=temp1->Next;
	}
	temp->Next=temp2;
	temp1->Next=NULL;
	free(temp1);
}
void del_at_pos(){
	int i,counter=0,pos;
	struct linkedlist *temp,*temp1;
	printf("\nEnter the position :");
	scanf("%d",&pos);
	
	temp=start;
	while(temp!=NULL){
		counter=counter+1;
		temp=temp->Next;
	}
	if(counter<pos){
		printf("Invalid");
		return;
	}
	temp=start;
	i=1;
	while(i<pos){
		i=i+1;
		temp1=temp;
		temp=temp->Next;
	}
	temp1->Next=temp->Next;
	temp->Next=NULL;
	free(temp);
	
}
void Node(){
	int counter=0;
	struct linkedlist *temp;
	
	temp=start;
	while(temp!=NULL){
		counter=counter+1;
		temp=temp->Next;
	}
	printf("The Total No. of Nodes are :%d",counter);
}

void Edit(){
	int i=1,counter=0;
	int pos,data;
	
	struct linkedlist *temp;
	printf("\nEnter the position no:");
	scanf("%d",&pos);
	
	printf("\nEnter the updated value :");
	scanf("%d",&data);
	
	temp=start;
	while(temp!=NULL){
		counter=counter+1;
		temp=temp->Next;
	}
	if(pos>counter){
		printf("Invalid");
		return;
	}
	temp=start;
	while(i<pos){
		i=i+1;
		temp=temp->Next;
	}
	temp->number=data;
}

void Reverse(){
	 struct linkedlist *ptr,*temp,*old;
	 temp=start;
	 ptr=NULL;
	 while(temp!=NULL){
	 	old=ptr;
	 	ptr=temp;
	 	temp=temp->Next;
	 	ptr->Next=old;
	 }	
	 start=ptr;
	 printf("\nThe reversed LinkedList is:");
	 Display();
}



void Display(){
	struct linkedlist *temp;
	temp=start;
	while(temp!=NULL){
		printf("%d-->",temp->number);
		temp=temp->Next;
	}
}

void Insert(){
	int no;
	printf("\nEnter 1 for Insert at Beginning:");
	printf("\nEnter 2 for Insert at the End:");
	printf("\nEnter 3 for Insert Before any node:");
	printf("\nEnter 4 for Insert After any node:");
	printf("\nEnter 5 for Insert At any Specific position:");
	printf("\n\nEnter your choice:");
	scanf("%d",&no);
	switch(no){
		case 1:
			 AtBeg();
			 break;
		case 2:
		    AtEnd();
			break;
		case 3:
		     Before_any_node();
			 break;	
		case 4:
			 After_any_node();
			 break;	
		case 5:
			At_specific_place();
		     break;		 
		      	 
		default:
		   printf("invalid choice!!!!");
		   break;		 
			
	}
}


void Delete(){
	int no;
	printf("\nEnter 1 for Delete from Beginning:");
	printf("\nEnter 2 for Delete from the End:");
	printf("\nEnter 3 for Delete Before any node:");
	printf("\nEnter 4 for Delete After any node:");
	printf("\nEnter 5 for Delete from any Specific position:");
	printf("\n\nEnter your choice:");
	scanf("%d",&no);
	switch(no){
		case 1:
			del_from_beg();
			break;
		case 2:
		    del_at_end();
			break;
		case 3:
		      del_before();
			 break;	
		case 4:
			del_after();
			 break;	
		case 5:
		     del_at_pos();
		     break;		 
		      	 
		default:
		   printf("invalid choice!!!!");
		   break;		 
			
	}
}



int main(){
       	
	
	int n;
	char choice='n';
	start=NULL;
	system("cls");

	do{	printf("\n\n");
		printf("\nEnter 1 for INSERT");
		printf("\nEnter 2 for DISPLAY");
		printf("\nEnter 3 for DELETE");
		printf("\nEnter 4 for FIND Total No of NODES");
		printf("\nEnter 5 for EDIT");
		printf("\nEnter 6 for REVERSE The LinkedList");
		printf("\nEnter 7 for EXIT");		
		printf("\n\nEnter your choice :");
		scanf("%d",&n);
		
		switch(n){
			case 1:
			    Insert();
				break;
			case 2:
				printf("\n");
				printf("LINKED LIST IS:");
				Display();
				break;
			case 3:
			   	Delete();
				break;	
			case 4:
			   	Node();
				break;	
				
        	case 5:
			   	Edit();
				break;
        	case 6:
			   	Reverse();
				break;				
								
			case 7:
			    printf("do you wanna exit('y' for yes 'n' for not yet):");
				scanf("%d",&choice)	;
			
			default:
			    printf("invalid choice!!!!");
					
			
		}
	}while(choice='n');
	
	return 0;
	
}

