#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node()
    {
        data=0;
        next=nullptr;
    }
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
class linked
{
    public:
    node* head;
    linked()
    {
        head=nullptr;
    }
    void inserthead(int val)
    {
        node* nnode=new node(val);
        nnode->next=head;
        head=nnode;
    }
    void middle()
    {
        int c=0;
        node* temp=head;
        while(temp!=nullptr)
        {
            c++;
            temp=temp->next;
        }
        node* t1=head;
        if(c%2!=0)
        {
            int flag=0;
            while(flag<c/2)
            {
                t1=t1->next;
                flag++;
            }
            cout<<"middle element is: "<<t1->data<<endl;
        }
        else
        {
            int flag=0;
            while(flag<(c/2-1))
            {
                t1=t1->next;
                flag++;
            }
            cout<<"the middle elements are: "<<t1->data<<" and "<<(t1->next)->data<<endl;
        }
    }
};
int main()
{
    linked l;
    l.inserthead(5);
    l.inserthead(4);
    l.inserthead(3);
    l.inserthead(2);
    l.inserthead(1);
    l.middle();
}