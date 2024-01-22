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
    string s;cin>>s;
    ll n,ans=0;cin>>n;
    ll a[26];
    string b="abcdefghijklmnopqrstuvwxyz";
    for(ll i=0;i<26;i++){
    	cin>>a[i];
    }
    map<char,ll>m;
    for(ll i=0;i<26;i++){
    	m[b[i]]=a[i];
    }
    for(ll i=0;i<s.size();i++){
    	ans+=(i+1)*(m[s[i]]);
    }
    sort(a,a+26);
    ll y=a[25];
    ll p=s.size()+1;
    while(n--){
      ans+=p*y;
      p++;
    }
    cout<<ans<<endl;
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
