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
node* inserthead(node* head,int val)
{
    node* nn=new node(val);
    nn->next=head;
    //head=nn;
    return nn;
}
node* common(node*h1,node* h2)
{
    node* h3=nullptr;
    //node* p1,*p2;
    node* h4=nullptr;
    while(h1!=nullptr && h2!=nullptr)
    {
        if(h1->data<h2->data)
        {
            //p1=h1;
            h1=h1->next;
        }
        else if(h2->data<h1->data)
        {
           // p2=h2;
            h2=h2->next;
        }
        else
        {
            /*h4->next=h1;
            p1->next=h1->next;
            h1=p1;
            h4=h4->next;
            h4->next=h2;
            p2->next=h2->next;
            h2=p2;*/
            node* newnode=new node(h1->data);
            if(h3==nullptr)
            {
                h3=newnode;
                h4=h3;
            }
            else
            {
                h4->next=newnode;
                h4=h4->next;
            }
            h1 = h1->next; // Move both pointers forward
            h2 = h2->next;
        }
    }
    return h3;
}
void print(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    node* h1=nullptr;
    node* h2=nullptr;
    h1=inserthead(h1,7);
    h1=inserthead(h1,6);
    h1=inserthead(h1,5);
    h1=inserthead(h1,4);
    h1=inserthead(h1,3);
    h1=inserthead(h1,1);
    h2=inserthead(h2,8);
    h2=inserthead(h2,6);
    h2=inserthead(h2,4);
    h2=inserthead(h2,2);
    cout<<"the first list is: "<<endl;
    print(h1);
    cout<<"the second list is: "<<endl;
    print(h2);
    node* h3=common(h1,h2);
    cout<<"the common list is: "<<endl;
    print(h3);
}