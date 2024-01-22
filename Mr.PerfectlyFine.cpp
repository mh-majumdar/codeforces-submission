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
   ll n;cin>>n;
   ll ans=0,skill=0;
   vector<pair<ll,string>>v;
   while(n--){
   	ll x;
   	string s;
   	cin>>x>>s;
    v.push_back(make_pair(x,s));
   }
   vsort(v);
   for(ll i=0;i<v.size();i++){
   	if(v[i].sceond=="10" || v[i].sceond=="01" ) skill++;
   	if(v[i].sceond=="11") skill+=2;
   	ans=
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
