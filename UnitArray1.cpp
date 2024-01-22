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
    ll pos=0,neg=0,ans=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]>0) pos++;
    	else neg++;
    }
    while(neg>pos){
    	pos++;
    	neg--;
    	ans++;
    }
    if(neg%2==0) cout<<ans<<endl;
    else cout<<ans+1<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
