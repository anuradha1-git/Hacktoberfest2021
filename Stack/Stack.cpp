//Reversing elements in array elements
#include<iostream>
using namespace std;
class stack1{
    int top=-1;
    int arr[10];
public:
    void push(){
        int data;
        if(top==9){
            cout<<"Array overflow"<<endl;
        }
        else{
            cout<<"Enter element to be added"<<endl;
            cin>>data;
            arr[++top]=data;
        }
    }
    void pop(){
        if(top>=0){
            cout<<arr[top--]<<endl;
        }else{
            cout<<"Array underflow"<<endl;
        }
    }
};

int main(){
    stack1 demo;

    for(int i=0;i<=9;i++){
        demo.push();
    }
    cout<<"Elements in reverse order are"<<endl;

    for(int i=0;i<=10;i++){
        demo.pop();
    }

    return 0;
}

