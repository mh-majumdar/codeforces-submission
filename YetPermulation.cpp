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
    vector<ll>v(n+10,0);
    cout<<1<<" ";
    for(ll i=2;i<=n;i++){
        ll j=i;
        if(v[j]==1) continue;
        while(j<=n){
            cout<<j<<" ";
            v[j]=1;
             j*=2;
        }
    }
    cout<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
