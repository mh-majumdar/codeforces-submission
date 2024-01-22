#include<bits/stdc++.h>
using namespace std;

#define   Shunno                  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   vll                    vector<ll>
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
#define   vsort(a)               sort (a.begin(),a.end())
#define   gvsort(a)              sort(a.begin(), a.end(), greater<ll>())
#define   reverse(a)             reverse(a.begin(),a.end())



void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    ll n;cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
    	ll x,y;cin>>x>>y;
    	v.push_back({x,y});
    }
    // for(auto it:v) cout<<it.first<<" "<<it.second<<endl;
    // bool ans=false;
    vsort(v);
    for(ll i=0;i<n-1;i++){
    	if(v[i].second>v[i+1].second){
    		cout<<"Happy Alex"<<endl;
    		return 0;
    	}
    }
    cout<<"Poor Alex";
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
