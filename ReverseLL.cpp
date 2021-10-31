#include<bits/stdc++.h>
using namespace std;

struct node{
  int data ;
  struct node *next;
}*head=NULL;


void create(int a[],int n){
    int i;
    struct node *p,*temp;
    head=(struct node* )malloc(sizeof(struct node));
    head->data=a[0];
    head->next=NULL;
    temp=head;

    for(i=1;i<n;i++){
        p=(struct node*)malloc(sizeof(struct node));
        p->data=a[i];
        p->next=NULL;
        temp->next=p;
        temp=p;

    }
}


void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void reverse1(struct node *test,int n ){
   struct node *k=test;
    int i=0;
    int a[n];
    while(k!=NULL){
        a[i]=k->data;
        k=k->next;
        i++;
    }

    k=head;
    i--;
    while(k!=NULL){
        k->data=a[i];
        k=k->next;
        i--;
    }

}


void reverse2(struct node *p,int n ){
   struct node *q=NULL,*r=NULL;


    while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;//reverse link
    }
    head=q;
}

void reverse3(struct node *q,struct node *p){
        if(p!=NULL){
            reverse3(p,p->next);
            p->next=q;

        }
        else{
            head=q;
        }
    }
int main(){
    int a[7]={34,21,44,23,7,6,34};
    int n=sizeof(a)/sizeof(a[0]);


    create(a,n);
    cout<<"simple\n";
    display(head);
     reverse1(head,n);
     cout<<"reverse 1\n";
     display(head);
     reverse2(head,n);
     cout<<"reverse 2\n";
     display(head);
     reverse3(NULL,head);
      cout<<"reverse 3\n";
     display(head);
}
