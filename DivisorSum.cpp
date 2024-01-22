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
    ll n,ans=0;
    cin>>n;
    vector<ll>v;
    if(n==1) cout<<0<<endl;
    else{
       for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0 && i!=n/i){
            ans+=i;
            ans+=n/i;
        }
        else if(n%i==0 && i==n/i) ans+=i;
    }
    cout<<ans+1<<endl;
    }
   

}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
