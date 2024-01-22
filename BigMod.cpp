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
    ll a,b,c;
    while(cin>>a>>b>>c){
     ll ans=1;
    while(b>0){
     if(b&1){
     	ans=(ans*a)%c;
     }
     a=(a*a)%c;
     b=b>>1;
    }
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
