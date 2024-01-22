#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl



void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    string s;cin>>s;
    if(s[0]==')' || s[s.size()-1]=='(' || s.size()%2!=0) no;
    else yes;
    // ll b=0;
    // for(ll i=0;i<s.size();i++){
    //     if(b<0) {
    //         no;
    //        return;
    //     }
    //      if(s[i]=='(') b++;
    //      else if(s[i]==')') b--;
    //      else if(b==0 && s[i]=='?') b++;
    //      else b--;
    // }
    // if(b==0 && s.size()%2==0) yes;
    // else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
