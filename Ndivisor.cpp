#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl

int div(int n){
	vector<ll>v;
    for(ll i=2;i*i<=n;i++){
    	while(n%i==0){
           v.push_back(i);
           n=n/i;
    	}
    	if(n>1) v.push_back(n);
    }
    ll d=1;
    map<ll,ll>m;
    for(ll i=0;i<v.size();i++){
       m[v[i]]++;
    }
    for(auto it:m){
        d=d*(it.second+1);
    }
    return d;
}

void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    ll a,b,c;
    cin>>a>>b>>c;
    ll test=0;
    for(ll i=a;i<=b;i++){
    	ll p=div(i);
    	if(p==c) test++;
    }
    //test=div(c);
    cout<<test<<endl;
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
