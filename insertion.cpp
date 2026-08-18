#include <iostream>
using namespace std;
void insertion(int arr[],int j)
{
    int el,pos;
    cout<<"Enter element you want to insert";
    cin>>el;
    cout<<"Enter positon at which you want to insert";
    cin>>pos;
    for(j=10;j>=pos-1;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[pos-1]=el;
    j=j+1;
    cout<<"Element inserted successfully"<<endl;
    for(j=0;j<=10;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int a[11],i;
    cout<<"Enter 10 elements for the array:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    insertion(a,i);
    return 0;
}