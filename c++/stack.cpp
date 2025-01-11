#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of stack: ";
    cin>>n;
    int arr[n];
    int top=-1;
    int b=1;
    while(b!=0)
    {
        int a;
        cout<<"enter choice-- \n1. push \n2. pop \n3. isEmpty \n4. isFull \n5. display \n6.peek"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            if(top>=n-1)
            {
                cout<<"stack overflow"<<endl;
            }
            else
            {
                int val;
                cout<<"enter element: ";
                cin>>val;
                top++;
                arr[top]=val;
            }
            break;
            case 2:
            if(top<=-1)
            {
                cout<<"stack underflow"<<endl;
            }
            else
            {
                cout<<"element popped is: "<<arr[top]<<endl;
                top--;
            }
            break;
            case 3:
            if(top<=-1)
            {
                cout<<"stack is empty"<<endl;
            }
            else
            {
                cout<<"stack is not empty"<<endl;
            }
            break;
            case 4:
            if(top>=n-1)
            {
                cout<<"stack is full"<<endl;
            }
            else
            {
                cout<<"stack is not full"<<endl;
            }
            break;
            case 5:
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
            break;
            case 6:
            cout<<"the element at the top is: "<<arr[top]<<endl;
        }
        cout<<"would you like to continue? 0 no 1 yes"<<endl;
    }
}