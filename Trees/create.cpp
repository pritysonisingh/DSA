//Creating a tree data structure

//Structure Definition
typedef struct Node{
	Node *left;
	Node *right;
	int data;
}Node;

//Funcyion Prototypes
Node *create(int);
Node *insert(Node*,int);

//Function to create new nodes
Node *create(int data){
	Node *newnode;
	newnode = new Node;
	newnode->right= NULL;
	newnode->left = NULL;
	newnode->data = data;
	return newnode;
}

//Function to insert nodes in a tree
Node *insert(Node *root, int data){
	if(root==NULL)
		return create(data);
		
	else{
		if(root->data<data)
			root->right = insert(root->right,data);
		else
			root->left = insert(root->left, data);
		return root;
	}
}

