//Function to remove duplicates from unsorted linked list.
Node * removeDuplicates( Node *head) 
{
 // your code goes here
    if(!head||!head->next)
        return head;
    unordered_set<int>s;
    Node *t1 = head,*t2 = head->next;
    s.insert(t1->data);
    while(t2){
        if(s.find(t2->data)==s.end()){
            s.insert(t2->data);
            t2=t2->next;
            t1=t1->next;
        }
        else{
            t1->next = t2->next;
            t2=t2->next;
        }
    }
    return head;
}
