//Recursive tree traversals

//Structure Definition
typedef struct Node{
	Node *leftChild;
	Node *rightChild;
	int data;
}Node;

//Function Prototypes
void inorder(Node*);
void preorder(Node*);
void postorder(Node*);

//Recursive inorder traversal
void inorder(Node *root){
    if(root==NULL)
        return;
    else{
        inorder(root->leftChild);
        cout<<root->data<<" ";
        inorder(root->rightChild);
    }
}

//Recursive preorder traversal
void preorder(Node *root){
    if(root==NULL)
        return;
    else{
        cout<<root->data<<" ";
        preorder(root->leftChild);
        preorder(root->rightChild);
    }
}

//Recursive preorder traversal
void postorder(Node *root){
    if(root==NULL)
        return;
    else{
        postorder(root->leftChild);
        postorder(root->rightChild);
        cout<<root->data<<" ";
    }
}