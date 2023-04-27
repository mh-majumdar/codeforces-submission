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
    ll n,q,s=0,r=0;
    cin>>n>>q;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    	s+=a[i];
    }
    b[0]=a[0];
    for(ll i=1;i<n;i++){
    	b[i]=b[i-1]+a[i];
    }
    while(q--){
    	ll x,y,z;
    	cin>>x>>y>>z;
    	r=b[y-1]-b[x-2];
    	ll t=s-r+(y-x+1)*z;
    	//cout<<s<<" "<<r<<endl; 
    	if(t%2!=0) yes;
    	else no;
    }
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
