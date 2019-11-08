
//Structure definition 
typedef struct Node{
    int n;
    Node *next;
}Node;

//Function Prototype
int CircularOrNot(Node*);

//Function to check whether a linked list is Circular or not
int CircularOrNot(Node *head){
    Node *slowPtr, *fastPtr;
    slowPtr=fastPtr=head;

    if(head==NULL)
        return 1;

    while(slowPtr && fastPtr && fastPtr->next){
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
        if(slowPtr==fastPtr)
            return 1;
    }

    return 0;
}
