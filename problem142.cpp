void removeLoop(Node *head){
    Node *fast = head;
    Node *slow = head;
    Node *prev = head;
    while(f && f->next){
        prev = s;
        s = s->next;
        f = f->next->next;
        if(s==f)
            break;
    }
    if(!f || !f->next)
        return;
    if(s == head){
        prev->next = NULL;
        return;
    }
    s=head;
    while(s->next!=f->next){
        s=s->next;
        f=f->next;
    }
    f->next=NULL;
    return;
    
}