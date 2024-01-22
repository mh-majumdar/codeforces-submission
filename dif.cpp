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
    ll a,b;cin>>a>>b;
    bool ans=0;
    if(a==b) yes;
     else if(a>b){
        if(a%2==0 && b%2==0) yes;
        else if(a%2!=0 && b%2!=0) yes;
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
