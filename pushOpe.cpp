#include<iostream>
using namespace std;
#define MAX 100
int stackArr[MAX];
int top=-1;
void push(int x){
    if(top==MAX-1)
        cout<<"Stack Overflow";
    else
        stackArr[++top]=x;
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
    display();
    return 0;
}