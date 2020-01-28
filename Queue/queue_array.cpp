//queue implementation using array

//defining the maximum size of the queue
#define MAX 1000
//declaring the maximum size stack array
int queue[MAX];
//declaring the FRONT and REAR of the queue as -1 initially
int front=-1, rear=-1;

//function prototypes
void enqueue(int);
int dequeue();
int peek();
void display();

//function to enqueue elements in a queue
void enqueue(int n){
    if(rear==MAX-1)
        cout<<"OVERFLOW";
    else{
        front=0;
        rear++;
        queue[rear]=n;
    }
}

//function to dequeue an element from queue
int dequeue(){
    if(front==rear){
        cout<<"UNDERFLOW";
        return 0;
    }
    else{
        return queue[front];
        front++;
    }
}

//function to return the element present at the FRONT of the stack
int peek(){
    if(front==-1&&rear==-1){
        cout<<"UNDERFLOW";
        return 0;
    }
    return queue[front];
}

//function to display the queue elements
void display(){
    int i;
    for(i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
}

