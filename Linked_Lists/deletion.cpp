//Structure definition
typedef struct Node{
	int data;
	Node *next;
}Node;

//Function prototypes
Node *CreateNode(int);
Node *Delete_from_end(Node*, int);
Node *Delete_from_start(Node*);
Node *Delete_from_position(Node*, int);

//Deletion of a node from the beginning of linked list
Node *Delete_from_start(Node *head){
	Node *temp;
	if(head==NULL)
		cout<<"The list is empty";
	else{
		temp=head;
		head= temp->next;
		delete temp;
	}
	return head;
}

//Deletion of a node from the end of the linked list
Node *Delete_from_end(Node *head){
	Node *temp=head,*prev;
	if(head==NULL)
		cout<<"The list is empty";
	else{
		if(temp->next==NULL){
			head=NULL;
			delete temp;
		}
		while(temp->next){	
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		delete temp;
	}
	return head;
}

//Deletion of a node from a given position from the linked list
Node *Delete_from_position(Node *head,int pos){
	Node *temp=head,*prev,*temp1;
	int i=1;
	if(head==NULL)
		cout<<"The list is empty";
	else{
		if(pos==1){	
			head=temp->next;
			delete temp;
		}
		while(i<pos){
			prev=temp;
			temp=temp->next;
			i++;
		}
			prev->next= temp->next;
			delete temp;
	}
		return head;
}
	