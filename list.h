struct node{
	int data;
	struct node* next;
	struct node* prev;
};

void init_List(struct node** head);
void insert(struct node** head);
void append(struct node** head);
void traverse(struct node* head);
void insert_At_Position(struct node** head);
void search(struct node* head);
void remove_Last(struct node** head);

