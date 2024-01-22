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
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(v[i].second<v[i-1].second) ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
