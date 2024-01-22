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
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    sort(a,a+n);
    a[0]=a[0]+1;
    ll ans=1;
    for(ll i=0;i<n;i++){
    	ans*=a[i];
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
