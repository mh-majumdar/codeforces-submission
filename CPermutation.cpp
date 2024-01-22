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
    ll temp=n;
    vector<vector<ll>>v;
    while(n--){
    	vector<ll>a;
    	for(ll i=0;i<temp-1;i++){
    		ll x;cin>>x;
    		a.push_back(x);
    	}
    	v.push_back(a);
    }
    map<ll,ll>m;
    for(ll i=0;i<temp;i++){
         m[v[i][0]]++;
    }
    ll large=-1,first=0;
    for(auto it:m){
    	if(it.second>large){
    		large=it.second;
    		first=it.first;
    	}
    }
    
    for(ll i=0;i<temp;i++){
    	if(v[i][0]!=first){
    		cout<<first<<" ";
    		for(ll j=0;j<temp-1;j++){
    			cout<<v[i][j]<<" ";
    		}
    	    cout<<endl;
    	    return;
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