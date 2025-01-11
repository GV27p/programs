#include<iostream>
#include <stack>
#include<string>
using namespace std;
int main()
{
    string s;
    stack <char> s1;
    string s2="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s1.push(s[i]);
    }
    while(!s1.empty())
    {
        s2+=s1.top();
        s1.pop();
    }
    cout<<"reversed string is: "<<s2;
}