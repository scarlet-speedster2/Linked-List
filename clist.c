#include<stdio.h>
#include<stdlib.h>
#include"clist.h"

void traverse(node* head){
	if(!head){
		printf("\n List is empty");
		return;
	}
	node* current = head;
	do{		printf("%d ",current->data);
		current = current->next;
	}while(current !=head); 
}

void push(node** head){

	int d;
	printf("Enter the data to be inserted");
	scanf("%d",&d);
	node* new = (node*) malloc(sizeof(node));
	if(!new) return;
	new ->data =d;
	new ->next = new;

	if((*head) == NULL){
		(*head) = new;
	}
	else{
		node* temp = (*head);
		while(temp ->next != (*head))
			temp = temp->next;
		new ->next =(*head) ;
		temp ->next = new;
		(*head) = new;
	}
}

void append(node** head){

	int d;
	printf("\n Enter the data");
	scanf("%d",&d);
	node* new = (node*) malloc(sizeof(node));
	if(!new) return;
	node* temp = (*head);
	if((*head) == NULL){
		new ->data =d;
		new ->next = new;
		(*head) = new;
	}
	else{
		while(temp ->next != (*head))
			temp = temp->next;
		new ->data =d;
		new ->next = (*head);
		temp ->next = new;
	}
}

void pop_front(node** head){

	node* temp = (*head);
	if((*head) == NULL){
		printf("\nList is empty cannot pop node");
		return;
	}
	node* current = (*head);
	while(current ->next != (*head))
		current = current ->next;
	(*head) = (*head) ->next;
	current ->next = (*head);
	temp ->next = NULL;
	free(temp);

}

void pop_Back(node** head){

	node* temp;
	node* current;
	temp = (*head);
	if((*head) == NULL){
		printf("\nList is empty cannot pop node");
		return;
	}
	current = (*head);
	while(current ->next != (*head)){
		temp = current;
		current = current ->next;
	}
	temp ->next = (*head);
	current ->next = NULL;
	free(current);
	return;
}
