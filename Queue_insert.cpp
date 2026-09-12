#include<iostream>
using namespace std;
const int MAX=5;
int q[MAX];
int front=-1,rear=-1;
void enqueue(int x){
    if((rear+1)%MAX==front){
        cout<<"Queue Overflow";
        return;
    }
    if(front==-1)
        front=0;
    rear=(rear+1)%MAX;
    q[rear]=x;
}
void display(){
    if(front==-1)
        return;
    int i=front;
    while(true){
        cout<<q[i]<<" ";
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
}
int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        enqueue(x);
    }
    display();
    return 0;
}