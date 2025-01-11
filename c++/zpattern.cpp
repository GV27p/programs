#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int size;
    size=name.length();
    cout<<name<<endl;
    for(int i=1;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            cout<<" ";
        }
        cout<<name[size-i-1]<<endl;
    }
    cout<<name;
   
}