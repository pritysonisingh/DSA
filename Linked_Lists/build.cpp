#include<iostream>
using namespace std;
typedef struct Node{
    int val;
    Node *next;
}Node;

 Node *createNewNode(int val){
    Node *newptr = new Node;
    newptr->val=val;
    newptr->next= NULL;
    return newptr;
}

Node *insert(Node *head, int val){
    Node *ptr,*temp=head;
    ptr=createNewNode(val);
    if(head==NULL){
        head=ptr;
        return head;
    }
    while(temp->next!=NULL)
    	temp=temp->next;

    temp->next=ptr;
    return head;
}

void display(Node *head){
	while(head!=NULL){
		cout<<head->val<<" ";
		head= head->next;
	}
}

int main()
{
    int n,i,val;
    Node *head = NULL;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>val;
        head= insert(head,val);
    }
    display(head);
    return 0;
}
