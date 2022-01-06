#include<stdio.h>
#include"clist.h"



int main(){

	int choice;
	node* head = NULL;

	
	do{
	printf("\n Menu \n 1.Push \n 2.Append \n 3.Traverse \n 4. Pop Front \n 5. Pop back");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
			push(&head);
			break;
		case 2:
			append(&head);
			break;
		case 3:
			traverse(head);
			break;
		case 4:
			pop_front(&head);
			break;
		case 5:
			pop_Back(&head);
			break;

		default:
			if(choice != 0){
				printf("\nInvalid choice....");
			}
	}
	}while(choice != 0);

	return 0;
}

