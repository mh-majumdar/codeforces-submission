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
    ll ans=n-1;
    ans=(ans*(ans+1)*((2*ans)+1))/6;
    //cout<<ans<<endl;
    ll a[n];
    for(ll i=0;i<n;i++){
      a[i]=i+1;
    }
    ll m=0;
    for(ll i=1;i<n;i++){
    swap(a[n-i],a[n-(i+1)]);
    ll temp=0,mx=0;
        for(ll j=0;j<n;j++){
            m=a[j]*(j+1);
            mx=max(mx,m);
            temp+=m; 
        }
        temp=temp-mx;
        ans=max(temp,ans);
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
