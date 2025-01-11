#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter the rows and columns:"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter elements of the array:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxc,minr;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            maxc=INT_MIN;
            minr=INT_MAX;
            for(int k=0;k<r;k++)
            {
                if(maxc<=arr[k][j])
                {
                maxc=arr[k][j];
                }
            }
            for(int k=0;k<c;k++)
            {
                if(minr>arr[i][k])
                {
                    minr=arr[i][k];
                }
            }
            if(maxc==minr)
            {
            cout<<"saddle point: "<<maxc<<endl;
            }
        }
    }
}