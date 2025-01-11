#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int n=q.size();
    if(n%2!=0)
    {
        exit(-1);
    }
    int half=n/2;
    queue<int> first,second;
    for(int i=0;i<half;i++)
    {
        first.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        second.push(q.front());
        q.pop();
    }
    queue<int> res;
    while(!first.empty() || !second.empty())
    {
        if(!first.empty())
        {
            res.push(first.front());
            first.pop();
        }
        if(!second.empty())
        {
            res.push(second.front());
            second.pop();
        }
    }
    cout<<"the ansswer is: ";
    while(!res.empty())
    {
        cout<<res.front()<<" ";
        res.pop();
    }
}