#include <iostream>
using namespace std;
void merging(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int a[10],b[10],c[20],i,n1,n2;
    cout<<"Enter number of elements in first array"<<endl;
    cin>>n1;
    cout<<"Enter elements for first array in sorted order:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number of elements in second array"<<endl;
    cin>>n2;
    cout<<"Enter elements for second array in sorted order:"<<endl;
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    merging(a,b,c,n1,n2);
    cout<<"Merged array is:"<<endl;
    for(i=0;i<n1+n2;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}