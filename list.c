#include<stdio.h>
#include<stdlib.h>
#include"list.h"


void init_List(struct node** head){

	(*head) = NULL;
	return;
}

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

void append(struct node** head){

	int d;
	printf("Enter the data");
	scanf("%d",&d);
	struct node* new = (struct node*) malloc(sizeof(struct node));
	if(!new) return;
	new ->data = d;
	if((*head) == NULL){
		new ->next= NULL;
		new ->prev= NULL;
		(*head) =new;
	}
	else{
		struct node* temp = (*head);
		while(!temp)
			temp = temp ->next;
		temp ->next = new;
		new ->prev = temp;
		new ->next = NULL;
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

void insert_At_Position(struct node** head){
	
	int pos;
	printf("\nEnter the loc where you want to insert the node");
	scanf("%d",&pos);
	struct node* temp = (*head);
	int i = 0;
	for(i = 0;i<pos;i++){
		if(!temp){
			printf("\nInvalid position");
			return;
		}
		temp = temp ->next;
	}
	struct node* new = (struct node*) malloc(sizeof(struct node));
	if(!new) return;
	int d;
	printf("\nEnter the data to be inserted");
	scanf("%d",&d);
	new ->data =d;
	new ->next = temp;
	new ->prev = temp ->prev;
	temp ->prev = new;
}


void search(struct node* head){

	int count = 0;
	int key;
	printf("Enter the key you want to search..");
	scanf("%d",&key);

	while(head != NULL){
		if(head->data == key){
			printf("Node Found at loc %d ",count);
			return;
		}
		head = head ->next;
		count++;
	}
	printf("\n Node not found!!!!!...");
}

void remove_Last(struct node** head){

	if((*head) == NULL){
		printf("\n LIst in empty");
		return;
	}
	if((*head)->next == NULL){
		free((*head));
		return;
	}
	struct node* temp = (*head);
	while(temp ->next != NULL)
		temp = temp ->next;
	temp ->prev->next = NULL;
	free(temp);
}
