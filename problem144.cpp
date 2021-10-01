//In unsorted list
// Find duplicates in sorted list
Node *removeDuplicates(Node *root)
{
 // your code goes here
    if(!root || !root->next)
        return root;
    Node *t1 =root->next;
    Node *t2 =root;
    while(t1){
        if(t1->data == t2->data){
            t2->next=t1->next;
            t1 = t1->next;
        }
        else{
            t1=t1->next;
            t2=t2->next;
        }
    }
    return root;
}