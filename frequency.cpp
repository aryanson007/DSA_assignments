#include<iostream>
using namespace std;

void frequency(int a[],int n){
    int freq[10]={0};

    for(int i=0;i<n;i++){
        if(a[i]>=0 && a[i]<=9)
            freq[a[i]]++;
    }

    for(int i=0;i<10;i++){
        if(freq[i]>0)
            cout<<i<<" = "<<freq[i]<<endl;
    }
}

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    frequency(a,n);
    return 0;
}