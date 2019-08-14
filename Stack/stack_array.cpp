//stack implementation using array

//defining the maximum size of the stack
#define MAX 1000
//declaring the TOP of the stack as -1 initially
int TOP=-1;
//declaring the maximum size stack array
int stack[MAX];

//function prototypes
void PUSH(int);
void POP();
int PEEK();
void DISPLAY();

//function to push elements in a stack
void PUSH(int data){
	if(TOP==MAX-1)
		cout<<"\nOverflow";
	else{
		TOP++;
		stack[TOP]=data;
	}
}

//function to delete an element from stack
void POP(){
	if(TOP==-1)
		cout<<"\nUNDERFLOW";
	else{
		stack[TOP]=0;
		TOP--;
	}
}

//function to return the element present at the TOP of the stack
int PEEK(){
	if(TOP==-1){
		cout<<"\nUNDERFLOW";
		exit(1);
	}
	else
		return stack[TOP];
}

//function to display the stack elements
void DISPLAY(){
	int i;
	for(i=TOP;i>=0;i--)
		cout<<stack[i]<<" ";
}