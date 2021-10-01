//Floyd's Loop Detection Algorithm
bool detectLoop(Node* head)
{
    // your code here
    Node *fast=head;
    Node *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
            return 1;
    }
    return 0;
}
