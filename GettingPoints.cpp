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
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            a++;
            i++;
        }
    }
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
