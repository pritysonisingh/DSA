//Structure definition
typedef struct Node{
    int n;
    Node *next;
}Node;

//Function prototype
Node *FindNth(Node*,int);

//Function to find Nth node from the end
Node *FindNth(Node *head,int n){

    Node *ptr=head, *ptr1=head;
    int i;

    if(head==NULL)
        return NULL; 

    for(i=1;i<=n;i++){
        if(ptr)
            ptr=ptr->next;
    }
    
    while(ptr){
        ptr1=ptr1->next;
        ptr=ptr->next;   
    }

    if(ptr1)
        return ptr1;
    else 
        return NULL; 
}

