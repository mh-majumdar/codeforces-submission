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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
   set<ll>s;
   for(ll i=0;i<n;i++){
   	s.insert(a[i]);
   }
    if(s.size()==1 && *(s.begin())!=0) cout<<-1<<endl;
    else if(s.size()==1 && *(s.begin())==0) cout<<0<<endl;
    else{
    	vll v;
    	for(ll i=0;i<n;i++){
    		if(a[i]!=n) v.push_back(a[i]);
    	}
    	cout<<v.size()<<endl;
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
