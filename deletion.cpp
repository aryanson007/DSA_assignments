#include <iostream>
using namespace std;
void deletion(int arr[],int j)
{
    int pos;
    cout<<"Enter positon at which you want to delete element";
    cin>>pos;
    for(j=pos-1;j<9;j++)
    {
        arr[j]=arr[j+1];
    }
    cout<<"Element deleted successfully"<<endl;
    for(j=0;j<9;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int a[10],i;
    cout<<"Enter 10 elements for the array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    deletion(a,i);
    return 0;
}