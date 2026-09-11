#include<iostream>
using namespace std;
void largest(int a[],int n){
    int first=a[0],second=a[0];

    for(int i=1;i<n;i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first){
            second=a[i];
        }
    }
    cout<<"Largest = "<<first<<endl;
    cout<<"Second Largest = "<<second;
}

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    largest(a,n);
    return 0;
}