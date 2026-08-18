#include <iostream>
using namespace std;
void binary_search(int arr[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at position "<<mid+1<<endl;
            return;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
}
int main()
{
    int a[10],i,key;
    cout<<"Enter 10 elements for the array in sorted order:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element you want to search"<<endl;
    cin>>key;
    binary_search(a,10,key);
    return 0;
}