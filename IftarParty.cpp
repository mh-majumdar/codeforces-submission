#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
ll caseno;


void solution()
{
    cout<<"Case "<<++caseno<<": ";
    ll a,b;cin>>a>>b;
    if(b>=a-b) cout<<"impossible"<<endl;
    else{
    	std::vector<ll> v;
    	ll n=a-b;
    	for(ll i=1;i*i<=n;i++){
             if(n%i==0 and i!=n/i) {
             	v.push_back(i);
             	v.push_back(n/i);
    	}
    	else if(n%i==0 and i==n/i) v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(auto it:v) {
    	if(it>b) cout<<it<<" ";
    }
    	cout<<endl;
}
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
