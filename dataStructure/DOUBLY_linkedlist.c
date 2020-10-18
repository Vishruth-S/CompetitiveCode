#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void insert_at_beg();
void insert_at_end();
void insert_before_any_node();
void insert_after_any_node();
void insert_at_position();
void delete_from_beg();
void delete_from_end();
void delete_before_any_node();
void delete_after_any_node();
void delete_from_position();
void Node();
void Edit();
void Reverse();
void Display();

struct LinkedList{
	int Number;
	struct LinkedList *Next;
	struct LinkedList *Previous;
};
struct LinkedList *START;

void insert_at_beg(){
	struct LinkedList *Node;
	
	Node=(struct LinkedList*)malloc(sizeof(struct LinkedList));
	printf("\nENTER THE NODE ELEMENT :");
	scanf("%d",&Node->Number);
	Node->Next=NULL;
	Node->Previous=NULL;
	
	if(START==NULL){
		START=Node;
		START->Next=NULL;
		START->Previous=NULL;
		return;
	}
	else{
	      Node->Next=START;
	      Node->Previous=NULL;
	      START=Node;
		
	}	
}

void insert_at_end(){
	struct LinkedList *Node,*Temp;
	
	Node=(struct LinkedList*)malloc(sizeof(struct LinkedList));
	printf("\nENTER THE NODE ELEMENT :");
	scanf("%d",&Node->Number);
	Node->Next=NULL;
	Node->Previous=NULL;
	if(START==NULL){
		START=Node;
		START->Next=NULL;
		START->Previous=NULL;
		return;
	}
	else{
		Temp=START;
		while(Temp->Next!=NULL){
			Temp=Temp->Next;
		}
		Temp->Next=Node;
		Node->Next=NULL;
		Node->Previous=Temp;
		
	}	
	
}

void insert_before_any_node(){
	int Before;
	struct LinkedList *Node ,*Temp,*Temp1;
	printf("\nBEFORE WHICH NODE YOU WANT TO INSERT :");
	scanf("%d",&Before);
	Node=(struct LinkedList *)malloc(sizeof(struct LinkedList));
	printf("\nENTER THE NODE ELEMENT :");
	scanf("%d",&Node->Number);
	Node->Next=NULL;
	Node->Previous=NULL;
	
	Temp=START;
	Temp1=Temp->Next;
	while(Temp1->Number!=Before){
			Temp=Temp1;    //traversal till temp1
		    Temp1=Temp1->Next;
	
	}
	
	Temp->Next=Node;
    Node->Previous=Temp;
	Node->Next=Temp1;
	Temp1->Previous=Node;	
		
}

void insert_after_any_node(){
	int after;
	struct LinkedList *Node,*Temp,*Temp1;
	printf("\nAFTER WHICH NODE YOU WANT TO INSERT :");
	scanf("%d",&after);
	
	Node=(struct LinkedList *)malloc(sizeof(struct LinkedList));
	printf("\nENTER THE NODE ELEMENT :");
	scanf("%d",&Node->Number);
	Node->Next=NULL;
	Node->Previous=NULL;
	
	Temp=START;
	Temp1=Temp->Next;
	while(Temp->Number!=after){
	
		Temp=Temp->Next;
		Temp1=Temp->Next;
	}	

//	Temp->Next=Node;
	Node->Previous=Temp;
	Node->Next=Temp1;
	Temp->Next=Node;
	Temp1->Previous=Node;
	
}

void insert_at_position(){
	
	int i=1,count=0,pos;
	struct LinkedList *Node,*Temp,*Temp1;
	printf("\nENTER THE POSITION NO. WHERE YOU WANT TO INSERT :");
	scanf("%d",&pos);
	
	Node=(struct LinkedList *)malloc(sizeof(struct LinkedList));
	printf("\nENTER THE NODE ELEMENT :");
	scanf("%d",&Node->Number);
	Node->Next=NULL;
	
	Temp=START;
	while(Temp!=NULL){
		Temp=Temp->Next;
		count++;
	}
	if(pos>count){
		printf("\nINVALID INDEX NUMBER !!!!!!!");
		return;
	}
	Temp=START;
	Temp1=Temp->Next;
	while(i<pos-1){
		i++;
		Temp=Temp1;
		Temp1=Temp1->Next;
	}
	Temp->Next=Node;
	Node->Previous=Temp;
	Node->Next=Temp1;
    Temp1->Previous=Node;
	
}

void delete_from_beg(){
	
	struct LinkedList *Temp;
	Temp=START;
	START=START->Next;
	START->Previous=NULL;
	Temp->Next=NULL;
	free(Temp);
	
}
void delete_from_end(){
	  struct LinkedList *Temp,*Temp1;
	  Temp=START;
	  Temp1=Temp->Next;
	  while(Temp1->Next!=NULL){
	  		Temp=Temp1;
	  	Temp1=Temp1->Next;
	  }
	  Temp->Next=NULL;
	  Temp1->Previous=NULL;
	  free(Temp1);
	  	
}

void delete_before_any_node(){
	int Before;
	struct LinkedList *Temp,*Temp1,*Temp2;
	printf("\nBEFORE WHICH NODE YOU WANT TO INSERT :");
	scanf("%d",&Before);

	
	Temp=START;
	Temp1=Temp->Next;
	Temp2=Temp1->Next;
	while(Temp2->Number!=Before){
		  Temp=Temp->Next;
		  Temp1=Temp->Next;
		  Temp2=Temp1->Next;
	
	}
	
	Temp->Next=Temp2;
	Temp2->Previous=Temp;
	Temp1->Next=NULL;
	Temp1->Previous=NULL;
	free(Temp1);
    
}

void delete_after_any_node(){
	int after;
	struct LinkedList *Temp,*Temp1,*Temp2;
	printf("\nAFTER WHICH NODE YOU WANT TO INSERT :");
	scanf("%d",&after);

	
	Temp=START;
	Temp1=Temp->Next;
	Temp2=Temp1->Next;
	while(Temp->Number!=after){
		  Temp=Temp->Next;
		  Temp1=Temp->Next;
		  Temp2=Temp1->Next;
	
	}
	
	Temp->Next=Temp2;
	Temp2->Previous=Temp;
	Temp1->Next=NULL;
	Temp1->Previous=NULL;
	free(Temp1);
    
	
}


void delete_from_position(){
	
	int i=1,count=0,pos;
	struct LinkedList *Temp,*Temp1,*Temp2;
	printf("\nENTER THE POSITION NO. FROM WHERE YOU WANT TO DELETE:");
	scanf("%d",&pos);
	
	Temp=START;
	while(Temp!=NULL){
		Temp=Temp->Next;
		count++;
	}
	if(pos>count){
		printf("\nINVALID INDEX NUMBER !!!!!!!");
		return;
	}
//	Temp=START;
//	Temp1=Temp->Next;
//	
//	while(Temp1->Number!=pos){
//		  Temp=Temp1;
//		  Temp1=Temp->Next;
//		  Temp2=Temp1->Next;
	Temp=START;
	Temp1=Temp->Next;
     Temp2=Temp1->Next;
	while(i<pos-1){
		i++;
		Temp=Temp1;
		Temp1=Temp1->Next;
		Temp2=Temp2->Next;
	}
	
	
   Temp->Next=Temp2;
   Temp2->Previous=Temp;
   Temp1->Next=NULL;
   Temp->Previous=NULL;
   free(Temp1);
	
}

void Node(){
	int count=0;
	struct LinkedList *Temp;
	Temp=START;
	while(Temp!=NULL){
		count++;
		Temp=Temp->Next;
	}
	printf("\nThe total NUMBAR OF NODES ARE : %d ",count);
}


void Edit(){
	
	int i=1,count=0,pos,data;
	struct LinkedList *Temp,*Temp1,*Temp2;
	printf("\nENTER THE POSITION NO. WHERE YOU WANT TO EDIT:");
	scanf("%d",&pos);
	printf("\nENTER THE NEW DATA :");
	scanf("%d",&data);
	
	Temp=START;
	while(Temp!=NULL){
		Temp=Temp->Next;
		count++;
	}
	if(pos>count){
		printf("\nINVALID INDEX NUMBER !!!!!!!");
		return;
	}

	Temp=START;
	Temp1=Temp->Next;
     Temp2=Temp1->Next;
	while(i<pos-1){
		i++;
		Temp=Temp1;
		Temp1=Temp1->Next;
		Temp2=Temp2->Next;
	}
	
	Temp1->Number=data;

	
}

void Reverse(){
	 struct LinkedList *ptr,*Temp,*old;
	 Temp=START;
	 ptr=NULL;
	 while(Temp!=NULL){
	 	old=ptr;
	 	ptr=Temp;
	 	Temp=Temp->Next;
	 	
	 	ptr->Next=old;
	 }	
	 START=ptr;
	 printf("\nThe reversed LinkedList is: ");
	 Display();
}


void Display(){
	struct LinkedList *Temp;
	Temp=START;
	while(Temp!=NULL){
		printf("%d-->",Temp->Number);
		Temp=Temp->Next;
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
			 insert_at_beg();
			 break;
		case 2:
		   insert_at_end();
			break;
		case 3:
		     insert_before_any_node();
			 break;	
		case 4:
			 insert_after_any_node();
			 break;	
		case 5:
			insert_at_position();
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
			delete_from_beg();
			break;
		case 2:
		    delete_from_end();
			break;
		case 3:
		      delete_before_any_node();
			 break;	
		case 4:
		     delete_after_any_node();
			 break;	
		case 5:
		     delete_from_position();
		     break;		 
		      	 
		default:
		   printf("invalid choice!!!!");
		   break;		 
			
	}
}



int main(){
       	
	
	int n;

	START=NULL;
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
                printf("End of LINKEDLIST");
			    break;
			
			default:
			    printf("invalid choice!!!!");
					
			
		}
	}while(n!=7);
	
	return 0;
	
}









