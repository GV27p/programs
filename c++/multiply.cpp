#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"enter rows and colums of first array: ";
    cin>>r1>>c1;
    int a1[r1][c1];
    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
          cin>>a1[r1][c1];
        }
    }
    cout<<"enter rows and colums of second array: ";
    cin>>r2>>c2;
    int a2[r2][c2];
    cout<<"enter elements of array: "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
          cin>>a2[r2][c2];
        }
    }
    int sum=0;
    int res[r1][c2];
    if(c1==r2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<r2;k++)
                {
                    sum+=(a1[i][k]*a2[k][j]);
                }
                res[i][j]=sum;
                sum=0;
            }
        }
        cout<<"the product is: "<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"the matrices can't be multiplied";
    }
}