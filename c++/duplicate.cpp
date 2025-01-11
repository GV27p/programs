#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                for(int k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"new array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}