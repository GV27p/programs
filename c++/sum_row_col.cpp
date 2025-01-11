#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter rows and columns: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"sum of "<<(i+1)<<" row is: "<<sum<<endl;
        sum=0;
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            sum+=arr[j][i];
        }
        cout<<"sum of "<<(i+1)<<" column is: "<<sum<<endl;
        sum=0;
    }
}