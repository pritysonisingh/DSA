//stack implementation using array

//defining the maximum size of the stack
#define MAX 1000
//Structure Definition
typedef struct Node{
	int data;
	Node *next;
}Node;

Node *TOP=NULL;
int i=0;

//function prototypes
void PUSH(int);
void POP();
int PEEK();
void DISPLAY();

//function to push elements in a stack
void PUSH(int data){
	Node *newnode;
	//creating a new node for insertion
	newnode = new Node;
	newnode->next= NULL;
	newnode->data = data;
	if(i==MAX)
        cout<<"\nOverflow";
    else{
        if(TOP==NULL)
            TOP = newnode;
        else{
            newnode->next = TOP;
            TOP = newnode;
        }
        i++;
	}
}

//function to delete an element from stack
void POP(){
	Node *temp;
	if(TOP==NULL)
		cout<<"\nUNDERFLOW";
	else{
		temp = TOP;
		TOP = TOP->next;
		delete temp;
        i--;
	}
}

//function to return the element present at the TOP of the stack
int PEEK(){
	if(TOP!=NULL)
		return TOP->data;
	else{
		cout<<"\nUNDERFLOW";
		exit(1);
	}
}

//function to display the stack elements
void DISPLAY(){
	Node *temp=TOP;
	if(TOP==NULL)
		cout<<"\nUNDERFLOW";
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
	