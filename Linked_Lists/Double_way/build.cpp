#include <iostream>
using namespace std;

//Structure Definition
typedef struct Node{
	struct Node *prev;//pointer to store the address of the previous node
	int val;
	struct Node *next;//pointer to store the address of the next node
}Node;

//Function Prototypes
Node *CreateNewNode(int);
Node *Insert(Node*,int);
void Display(Node *head);

//Creating a newnode
Node *CreateNewNode(int val){
	Node *newnode;
	newnode= (Node*)malloc(sizeof(Node));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->val= val;
	return newnode;
}

//function to insert the node in the linked list
Node *Insert(Node *head, int val){
	Node *newnode,*temp;
	newnode = CreateNewNode(val);
	if(head==NULL)
		head= newnode;
	else{
		for(temp=head;temp->next!=NULL;temp=temp->next);
		temp->next=newnode;
		newnode->prev= temp;
	}
	return head;
}

//function to display the linked list
void Display(Node *head){
	while(head){
		cout<<head->val<<"  ";
		head= head->next;
	}
}

//main function
int main() {
	int n,val,i;
	Node *head=NULL;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>val;
		head= Insert(head,val);
	}
	Display(head);
	return 0;
}
