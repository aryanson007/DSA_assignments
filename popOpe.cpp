#include<iostream>
using namespace std;
#define MAX 100
int stackArr[MAX];
int top=-1;
void push(int x){
    if(top<MAX-1)
        stackArr[++top]=x;
}
int pop(){
    if(top==-1){
        cout<<"Stack Underflow";
        return -1;
    }
    return stackArr[top--];
}
void display(){
    for(int i=top;i>=0;i--)
        cout<<stackArr[i]<<" ";
}
int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        push(x);
    }
    cout<<"Popped element = "<<pop()<<endl;
    display();
    return 0;
}