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
    ll sq=n/2,ans=0;
    //cout<<sq<<endl;
    if(n<3) cout<<0<<endl;
    else {
        for(ll i=1,j=8;i<=sq;i++,j=j+8){
    	ans=ans+i*j;
    }
    cout<<ans<<endl;
    }
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
