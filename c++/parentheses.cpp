#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string s;
    int count;
    stack <char> sta;
    cout<<"enter expression: ";
    cin>>s;
    bool balanced=true;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            sta.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']')
        {
            if(sta.empty())
            {
                balanced=false;
                break;
            }
        char ch2=sta.top();
        if((ch2=='(' && ch==')') || (ch2=='{' && ch=='}') || (ch2=='[' && ch==']'))
        {
            sta.pop();
        }
    }
    }
    if(sta.empty() && balanced)
    {
        cout<<"the parentheses are balanced";
    }
    else
    {
        cout<<"they are not balanced";
    }
}
