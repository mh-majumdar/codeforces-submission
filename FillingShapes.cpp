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
    if(n%2==1) cout<<0<<endl;
    else{
    	ll ans=n/2;
    	ans=1<<ans;
    	cout<<ans<<endl;
    }
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
