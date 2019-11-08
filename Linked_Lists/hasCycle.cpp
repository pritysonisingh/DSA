//Structure definition
typedef struct Node{
    int n;
    Node *next;
}Node;

//Function prototype
bool hasCycle(Node *head);

//Function to check whether there is a cycle in the linked list.
bool hasCycle(Node *head) {
    ListNode *slowPtr=head, *fastPtr=head;
        
        while(slowPtr && fastPtr && fastPtr->next){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr)
                return true;
        }

        return false;   
    }
