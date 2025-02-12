#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct item
{
    int profit,weight;
    item(int p,int w)
    {
        profit=p;
        weight=w;
    }
};
bool comp(item a,item b)
{
    double r1=(double)a.profit/((double)a.weight);
    double r2=(double)b.profit/((double)b.weight);
    return r1>r2;
}
double knapsack(int w,int n,item arr[])
{
    sort(arr,arr+n);
    double res=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=w)
        {
            w-=arr[i].weight;
            res+=arr[i].profit;
        }
        else
        {
            res+=arr[i].profit*((double)w/((double)arr[i].weight));
            break;
        }
    }
}
int main()
{
    int w=50;
    item arr[]={{60,10},{100,20},{120,30}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<knapsack(w,n,arr);
}