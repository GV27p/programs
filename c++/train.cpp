#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={900,940,950,1100,1500,1800};
    int dep[]={910,1200,1120,1130,1900,2000};
    int n=sizeof(arr)/sizeof(arr[0]);
    int plat=1;
    int res=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            plat++;
            i++;
        }
        else if(arr[i]>dep[j])
        {
            plat--;
            j++;
        }
        if(plat>res)
        {
            res=plat;
        }
    }
    cout<<res;
}