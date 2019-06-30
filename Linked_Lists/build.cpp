#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node{
    int n;
    Node *next;
}Node;

 Node *CreateNewNode(int n){
    Node *newptr;
    newptr= (Node*) malloc(sizeof(Node));
    newptr->n=n;
    newptr->next= NULL;
    return newptr;
}

Node *Insert(Node *head, int n){
    Node *ptr,*temp=head;
    ptr=CreateNewNode(n);
    if(head==NULL)
    {
        head=ptr;
        return head;
    }
    while(temp->next!=NULL)
    temp=temp->next;

    temp->next=ptr;
    return head;
}

void Display(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->n;
		head= head->next;
	}
}

int main()
{
    int n,i,data;
    Node *head;
    cin>>n;
    for(i=0;i<n;i++){
    
        cin>>data;
        head= Insert(head,data);
    }
    Display(head);
    return 0;
}