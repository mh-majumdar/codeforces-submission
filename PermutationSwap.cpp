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
    map<ll,ll>m;
    vector<ll>v;
    for(ll i=1;i<=n;i++){
    	cin>>a[i];
    	m[i]=a[i];
    }
    for(auto it:m) {
    	cout<<it.first<<" "<<it.second<<endl;
    	v.p
    }
   for(ll i=m.size();i>=1;i--){
   	   if(m[i].second==i) v.push_back(m[i].first-m[i])
   }
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
