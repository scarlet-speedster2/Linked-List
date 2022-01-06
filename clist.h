#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;

}node;

void traverse(node* head);

void push(node** head);

void append(node** head);

void pop_front(node** head);

void pop_Back(node** head);


