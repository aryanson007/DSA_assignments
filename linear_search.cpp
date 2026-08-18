#include <iostream>
using namespace std;

void linear_search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at position "<<i+1<<endl;
            return;
        }
    }
    cout<<"Element not found"<<endl;
}
int main()
{
    int a[10],i,key;
    cout<<"Enter 10 elements for the array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element you want to search"<<endl;
    cin>>key;
    linear_search(a,10,key);
    return 0;
}