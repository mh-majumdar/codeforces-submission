#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    string s1,s2;
    map<string,string>st;

    cin>>n>>m;
    while(m--)
    {
        cin>>s1>>s2;
        if(s1.size()>s2.size())
            st[s1]=s2;
        else
            st[s1]=s1;
    }
    while(n--)
    {
        cin>>s1;
        cout<<st[s1]<<" ";
    }


}