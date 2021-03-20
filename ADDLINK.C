#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
};
int x;
struct node *start = NULL;
void add_start(int x);
void add_end(int x);
void display();
void delete_from_begin();
void delete_end();
int main(){
      int ch;
      

      for(;;){
       printf("\n add 1 for add_start \n add 2 for add_end \n add 3 for dispaly \n add 4 for delete from beign\n add 5 quit \n add 6 for delete from end");
      
	  printf("\n enter the choice");
      scanf("%d",&ch);
      if(ch ==1 ){
	  add_start(12);
      }
      else if(ch==3)
      display();
      else if(ch==2)
      add_end(12);
      else if(ch==4)
      delete_from_begin();
      else if(ch ==5)
      break;
      else if(ch ==6)
      delete_end();
      }
      

}
void  add_start(int x){
		struct node *t;
	 printf("\n enter the value to add in list");
	 scanf("%d",&x	);

	//printf("%d",x);
	t = (struct node*)malloc(sizeof(struct node));
	t->data = x;//[  x | &s    ] [  x | next    ]
	//printf("\n t of data=%d",t->data);
	if(start == NULL){
	    start = t;
	    start->next = NULL;
	    return;
	}
	t->next = start;

	start=t;


}
void  add_end(int x){
       struct node *t,*temp;
       
       printf("enter the num ");
       scanf("%d",&x);
       
       t= (struct node*)malloc(sizeof(struct node));
       t->data =x;
       
       if(start == NULL){
       	start = t;
       	start->next = NULL;
       	return;
       	}
       	else{
		   
       	temp =start;
       	
       	while(temp->next != NULL){
       		temp = temp->next;
		   }
		   
		temp->next = t;
		t->next = NULL;   
	}
	


}

void display(){
   struct node *t;
      t= start;

     if(t == NULL){
	printf("\n list empty");
     }
     else{
	 while(t->next != NULL){
	    printf("\n %d",t->data);
	    t= t->next;
	 }
	 printf("\n %d",t->data);
     }
}

void delete_from_begin(){
   struct node *t;
   int n;
   if(start == NULL){
   	  printf("\n linked list empty");
   	  return;
   }
   n= start->data;
   t= start->next;
   
   free(start);
   start=t;
     printf("%d deleted from the beginning successfully.\n", n);

}
void delete_end(){
	struct node *t,*temp;
	int n;
	
	if(start== NULL){
		printf("empty linked list");
		return;
	}
	if(start->next == NULL){
		n=start->data;
		free(start);
		start = NULL;
		printf("%d deleted from end successfully.\n", n);

		return;
	}
	
	t= start;
	while(t->next != NULL){
		temp = t;
		 t= t->next;
	}
	
	n= t->data;
	temp->next=NULL;
	free(t);
	printf("%d deleted from end successfully.\n", n);

}
