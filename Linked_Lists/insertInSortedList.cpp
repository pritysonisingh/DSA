//Structure definition
typedef struct Node{
    int data;
    Node *next;
}Node;

//Function prototype
Node *insertInSortedList(Node*,Node*);

//Function to insert a node in a sorted Linked list
Node *insertInSortedList(Node *head,Node *n){
    Node *temp=head,*prev;

    if(!head)
        return NULL;

    while(temp->next && temp->data < n->data){
        prev= temp;
        temp = temp->next;
    }

    prev->next = n;
    n->next = temp;
    return head;
}
