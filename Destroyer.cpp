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
   
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    	m[a[i]]++;
    }

    auto it=m.begin();
    auto it1=--m.end();
   
    for(auto it:m) cout<<it.first<<" "<<it.second<<endl;

    	cout<<endl;
    
    cout<<it->second<<" "<<it1->second<<endl;
    if(it->second >= it1->second) yes;
    else no;   

    
    
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
