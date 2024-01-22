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
    vector<ll>a,b;
    set<ll>s;
    for(ll i=0;i<n;i++){
    	ll x;cin>>x;
    	if(x<=n){
    		a.push_back(x);
    		s.insert(x);
    	}
    	else b.push_back(x);
    }
    cout<<a.size()-s.size()+b.size()<<endl;
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
