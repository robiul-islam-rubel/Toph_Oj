#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    ///cout<<s;
    stack<char>myStack;
    for(int i=0;i<s.size();i++)
    {
        if(!myStack.empty()&&myStack.top()=='('&&s[i]==')')
        {
            myStack.pop();
        }
        else
        {
            myStack.push(s[i]);
        }
    }
    if(myStack.empty())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
