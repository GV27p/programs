#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of queue:"<<endl;
    cin>>n;
    int q[n],q1[n];
    int f1=-1;
    int f2=-1;
    int r2=-1;
    int r1=-1;
    int val;
    while(r1<n-1)
    {
      f1= 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      r1++;
      q[r1] = val;
    }
    while(r2<n-2)
    {
        f2=0;
        r2++;
        q1[r2]=q[f1];
        f1++;
    }
    cout<<q[f1]<<endl;
    f1--;
    r1--;
    while(f1>=1)
    {
        q[r1]=q1[f2];
        f2++;
        f1--;
        if(f1==1)
        {
        q[f1]=q[r1];
        }
    }
    cout<<q1[f2]<<endl;
    f2--;
    r2--;
    q1[f2]=q[f1];
    f1+=2;
    cout<<q[f1]<<endl;
    cout<<q1[f2]<<endl;
}