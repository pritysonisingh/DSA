//Structure definition
typedef struct Node{
    int data;
    Node *next;
}Node;

//Function prototype
Node *deleteDupInSortedList(Node*);

//Function to delete duplicates in a sorted array
Node *deleteDupInSortedList(Node *head){
    Node *temp= head,*ptr;

    if(head==NULL)
        return NULL;

    while(temp->next){
        if(temp->data==temp->next->data){
            ptr=temp->next;
            temp->next=temp->next->next;
            delete ptr;
        }
        else
            temp= temp->next;
    }
    
    return head;
}
