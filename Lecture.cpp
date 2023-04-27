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
    ll a,b;
    cin>>a>>b;
    vector<pair<string,string>>x;
    vector<string>y;
    while(b--){
    	string p,q;
    	cin>>p>>q;
    	x.push_back(make_pair(p,q));
    }
    while(a--){
    	string s;
        cin>>s;
    	y.push_back(s);
    }
  for(ll i=0;i<a;i++){
  	for(ll j=0;j<b;j++)
    {
       if(y[i]==x[j].first){
  		if(x[j].first<=x[j].second)
  			cout<<x[j].first<<" ";
  		else cout<<x[j].second<<" ";
  	}
    else if(y[i]==x[j].second){
        if(x[j].second<=x[j].first)
            cout<<x[j].second<<" ";
            else cout<<x[j].first<<" ";
    }
  	}
}
}
int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
