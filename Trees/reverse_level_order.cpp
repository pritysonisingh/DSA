
//Defining max size
#define MAX 1000

int front=0, rear=0,top=-1;

//Structure Definition
typedef struct Node{
	Node *left;
	Node *right;
	int val;
}Node;

//Function Prototypes
Node *q[MAX],*s[MAX];
void enqueue(Node*);
Node *dequeue();
void push(Node*);
Node *pop();
void ReverseLevelOrder(Node*);

//Function for reverse level order traversal
void ReverseLevelOrder(Node *root){
	if(root==NULL)
		return;
	Node *temp;
	enqueue(root);
	while(isEmpty()==false){
		root = dequeue();
		push(root);
		
		if(root->right!=NULL)
			enqueue(root->right);
		if(root->left!=NULL)
			enqueue(root->left);
	}
	while(isEmpty1()==false){
		root = pop();
		cout<<root->val;
	}	
}

// function to push an element to the stack
void push(Node *n){
	if(top>=MAX-1)
		cout<<"overflow";
	else{
		top++;
		s[top]= n;
	}
}

// function to pop an element from stack
Node *pop(){
	if(top==-1){
		cout<<"underflow";
		return NULL;
	}
	else{
		Node *temp= s[top];
		s[top]=NULL;
		top--;
		return temp;
	}
}

// function to check whether a stack is empty or not
bool isEmpty1(){
	if(top==-1)
		return true;
	else
		return false;
}

// function to check whether a queue is empty or not
bool isEmpty(){
	if(rear==front)
		return true;
	else 
		return false;
}



//function to enqueue an element to the queue
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
	if(rear==front){
		cout<<"Underflow";
		return NULL;
	}
	else{
		Node *temp= q[front];
		for(i=0;i<rear-1;i++)
			q[i]= q[i+1];
		rear--;
		return temp;
	}
}


