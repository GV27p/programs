#include<iostream>
using namespace std;
class que
{
    public:
    int n;
    int front,rear;
    que(int size)
    {
        n=size;
        front=0;
        rear=-1;
    }
    void enqueue(int *a)
    {
        if(rear==n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        int val;
        cout<<"enter value"<<endl;
        cin>>val;
        rear++;
        a[rear]=val;
    }
    void dequeue(int *a)
    {
        if(front>rear)
        {
            cout<<"queue underflow"<<endl;
            return;
        }
        cout<<"element removed is: "<<a[front]<<endl;
        front++;
    }
    void isempty(int *a)
    {
        if(front>rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"queue is not empty"<<endl;
        }
    }
    void isfull(int *a)
    {
        if(rear==n-1)
        {
            cout<<"queue is full"<<endl;
        }
        else
        {
            cout<<"queue is not full"<<endl;
        }
    }
    void display(int *a)
    {
        cout<<"the queue is: ";
        for(int i=front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    int s;
    cout<<"enter size of queue: ";
    cin>>s;
    int arr[s];
    que q(s);
    int a,b;
    b=1;
    while(b!=0)
    {
        cout<<"enter choice \n1. enqueue \n2. dequeue \n3. isempty \n4. isfull \n5. display"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            q.enqueue(arr);
            break;
            case 2:
            q.dequeue(arr);
            break;
            case 3:
            q.isempty(arr);
            break;
            case 4:
            q.isfull(arr);
            break;
            case 5:
            q.display(arr);
            break;
            default:
            cout<<"invalid choice";
        }
        cout<<"would you like to continue? 1 :yes 0 :no"<<endl;
        cin>>b;
    }
}