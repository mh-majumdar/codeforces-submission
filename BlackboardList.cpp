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
    ll a[n],zero=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]<0) zero++;
    }
    sort(a,a+n);
    if(zero>=1) cout<<a[0]<<endl;
    else cout<<a[n-1]<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
