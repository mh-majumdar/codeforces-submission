#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
ll caseno;


void solution()
{
    cout<<"Case "<<++caseno<<": ";
    ll n;cin>>n;
    ll a[n],ans=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    for(ll i=1;i<n;i++){
         ll x=__gcd(a[i],a[i-1]);
         ans=(a[i]*a[i-1])/x;
    }
    cout<<ans<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
