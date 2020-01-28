//queue implementation using linked list

//defining the maximum size of the queue
#define MAX 1000
//Structure Definition
typedef struct Node{
	int data;
	Node *next;
}Node;

Node *FRONT=NULL, *REAR=NULL;
int c=0;

//function prototypes
void enqueue(int);
void dequeue();
int peek();
void display();

//function to push elements in a queue
void enqueue(int data){
	Node *newnode;
	//creating a new node for insertion
	newnode = new Node;
	newnode->next= NULL;
	newnode->data = data;
	if(c==MAX)
        cout<<"\nOverflow";
    else{
        if(FRONT==NULL){
            FRONT = newnode;
            REAR = newnode;
        }
        else{
            REAR->next= newnode;
            REAR = newnode;
        }
        c++;
	}
}

//function to delete an element from queue
void dequeue(){
	Node *temp;
	if(FRONT==NULL)
		cout<<"\nUNDERFLOW";
	else{
		temp = FRONT;
		FRONT = FRONT->next;
		delete temp;
        c--;
	}
}

//function to return the element present at the FRONT of the queue
int peek(){
	if(FRONT!=NULL)
		return FRONT->data;
	else{
		cout<<"\nUNDERFLOW";
		exit(1);
	}
}

//function to display the queue elements
void display(){
	Node *temp=FRONT;
	if(FRONT==NULL)
		cout<<"\nUNDERFLOW";
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

