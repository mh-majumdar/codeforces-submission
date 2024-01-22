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
    vector<ll>v1,v2;
    ll x=n;
    while(x--){
    	ll p,q;
    	cin>>p>>q;
    	v1.push_back(p);
    	v2.push_back(q);
    }
    // for(auto it:v1) cout<<it<<" ";
    // 	cout<<endl;
    // for(auto it:v2) cout<<it<<" ";
    // 	cout<<endl;
    ll temp=v2[0];
    vector<ll>v3;
    for(ll i=1;i<v2.size();i++){
      if(v2[i]>=temp) v3.push_back(v1[i]);
    }
    // for(auto it:v3) cout<<it<<" ";
    // 	cout<<endl;
    bool ans=false;
    ll cnt=0;
    for(ll i=0;i<v3.size();i++){
     if(v3[i]>temp) {
     	ans=true;
     	break;
     }
    }
    if(ans==false && v1[0]>v2[0]) cout<<temp+1<<endl;
    else cout<<-1<<endl;

}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
