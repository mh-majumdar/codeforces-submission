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
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    for(ll i=0;i<n;i++){
    	cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll x=0,y=0;
    for(ll i=0;i<n;i++) x+=a[0]+b[i];
    	for(ll i=0;i<n;i++) y+=b[0]+a[i];
    		cout<<min(x,y)<<endl;

}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
