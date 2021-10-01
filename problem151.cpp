Node* merge(Node *f,Node *s){
    if(!f)
        return s;
    if(!s)
        return f;
    if(f->data<s->data){
        f->next=merge(f->next,s);
        return f;
    }
    else{
        s->next = merge(f,s->next);
        return s;
    }
}
Node* mergeSort(Node* head) {
    // your code here
    if(head==NULL || head->next==NULL)
        return head;
    Node *fast=head->next;
    Node *slow=head;
    while(fast&&fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *newhead = slow->next;
    slow->next = NULL;
   return  merge(mergeSort(head),mergeSort(newhead));
}