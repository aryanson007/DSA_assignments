#include<iostream>
using namespace std;
const int MAX=5;
int q[MAX];
int front=-1,rear=-1;
void enqueue(int x){
    if((rear+1)%MAX==front)
        return;
    if(front==-1)
        front=0;
    rear=(rear+1)%MAX;
    q[rear]=x;
}
void dequeue(int x){
    if(front==-1){
        cout<<"Queue Underflow";
        return;
    }
    if(q[front]!=x){
        cout<<"Element is not at front";
        return;
    }
    front=(front+1)%MAX;
    if(front==(rear+1)%MAX){
        front=-1;
        rear=-1;
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is empty";
        return;
    }
    int i=front;
    while(true){
        cout<<q[i]<<" ";
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
}
int main(){
    int n,x,del;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        enqueue(x);
    }
    cin>>del;
    dequeue(del);
    display();
    return 0;
}