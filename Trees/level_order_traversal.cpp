//breadth first traversal of a tree

//defining the maximum size of the queue
#define MAX 1000

int front=0, rear=0;

//Structure Definition
typedef struct Node{
	Node *left;
	Node *right;
	int val;
}Node;

//Function Prototypes
Node *q[MAX];
void enqueue(Node*);
Node *dequeue();
void levelOrder(Node*);

//function for level order traversal
void levelOrder(Node *root){
	if(root==NULL)
		return;
	Node *temp;
	enqueue(root);
	while(isEmpty()==false){
		temp = dequeue();
		cout<<temp->val;
		if(temp->left!=NULL)
			enqueue(temp->left);
		if(temp->right!=NULL)
			enqueue(temp->right);			
	}
}

//function to check whether the queue is empty
bool isEmpty(){
	if(front==rear)
		return true;
	else 
		return false;
}

//function to add an element to the queue
void enqueue(Node *n){
	if(rear==MAX-1)
		cout<<"Overflow";
	else{
		q[rear]=n;
		rear++;		
	}
}

//function to dequeue an element from the queue
Node *dequeue(){
	int i;
	if(front==rear){
		cout<<"Underflow";
		return NULL;
	}
	else{
		Node *temp= q[front];
		for(i=0;i<rear-1;i++)
			q[i]=q[i+1];
		rear--;
		return temp;
	}
}