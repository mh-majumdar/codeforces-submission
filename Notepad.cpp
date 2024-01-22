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
    ll n;cin>>n;
    string s;cin>>s;
    if(n==1) no;
    else{
    	char a=s[s.size()-2];
       char b=s[s.size()-1];
    bool ans=false;
    for(ll i=0;i<s.size()-3;i++){
          if(s[i]==a && s[i+1]==b){
          	ans=true;
          	break;
          }
    }
    if(ans) yes;
    else no;
    }
    
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
