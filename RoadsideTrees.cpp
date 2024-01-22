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
    ll ans=n+a[0];
    for(ll i=1;i<n;i++){
        if(a[i]>a[i-1]) {
        	ans++;
        }
        else{
        	ans+=a[i-1]+a[i];
        } 
    }
    if(a[1]>a[0]) cout<<ans+1;
    else cout<<ans+a[0]+1;
    
    
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
