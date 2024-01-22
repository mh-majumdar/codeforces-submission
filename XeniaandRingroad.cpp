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
    ll x,n;
    cin>>x>>n;
    ll a[n],cnt=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    for(ll i=1;i<n;i++){
        if(a[i]<a[i-1]) cnt++;
    }
    //cout<<cnt<<endl;
    if(a[n-1]==1) cout<<x*cnt<<endl;
    else cout<<x*cnt+a[n-1]-1<<endl;

}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
