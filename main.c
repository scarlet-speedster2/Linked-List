#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

void insert(struct node** head){
	
	int d;
	printf("Enter the data");
	scanf("%d",&d);
	struct node* new = (struct node*) malloc(sizeof(struct node));
	if(!new)
		printf("\n Overflow");
	if((*head) == NULL){
		new ->data =d;
		new ->next = NULL;
		new ->prev = NULL;
		(*head) = new;
	}
	else{
		new ->data = d;
		new ->prev = NULL;
		(*head) ->prev = new;
		new ->next = (*head);
		(*head) = new;
	}
}

void traverse(struct node* head){

	struct node* last;
	struct node* t;
	while(head != NULL){
		printf("%d ",head->data);
		last = head;
		head = head ->next;
	}
	printf("\n In Reverse Order");
	while(last != NULL){
		printf("%d ",last->data);
		last = last ->prev;
	}
}



int main(){

	struct node* head = NULL;
	insert(&head);
	insert(&head);
	traverse(head);
	return 0;
}	
