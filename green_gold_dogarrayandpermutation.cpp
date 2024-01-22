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
    ll a[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
    	v.push_back({a[i],i});
    }
    ll b[n];
    sort(v.begin(),v.end());
    ll j=0;
    for(ll i=n;i>=1;i--){
        b[v[j].second]=i;
        j++;
    }
    for(ll i=0;i<n;i++){
        cout<<b[i]<<" ";
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
