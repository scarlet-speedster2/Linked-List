#include<stdio.h>
#include<stdlib.h>
#include"list.h"




int main(){

	struct node* head;

	int choice;
	do{
		printf("----------MENU---------");
		printf("\n 1. Initialize List \n 2. Insert at beginning \n3. Insert at perticular Positon\n 4. Insert at End \n 5. search");

		printf("\n 6.Traverse\n 7.Remove");
		printf("\n Enter 0 to exit Menu...");
		printf("\n\n\n");
		scanf("%d",&choice);
		printf("\n\n");
		switch(choice){
			case 1:
				init_List(&head);
				break;
			case 2:
				insert(&head);
				break;
			case 3:
				insert_At_Position(&head);
				break;
			case 4:
				append(&head);
				break;
			case 5:
				search(head);
				break;
			case 6:
				traverse(head);
				break;
			case 7:
				remove_Last(&head);
			default:
				if(choice == 0){
					break;}
				printf("\nInvalid option");
			}
	}while(choice != 0);

	return 0;
}	
