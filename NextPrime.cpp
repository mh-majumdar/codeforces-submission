#include<bits/stdc++.h>
using namespace std;

#define   Shunno                  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   vll                    vector<ll>
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
#define   vsort(a)               sort (a.begin(),a.end())
#define   gvsort(a)              sort(a.begin(), a.end(), greater<ll>())
#define   reverse(a)             reverse(a.begin(),a.end())



void solution()
{    ll x;
     cin>>x;
     ll n=100009;
     vll v;
    ///cout<<"Case "<<++caseno<<": ";
    ll prime[n+3];
   memset(prime,0,sizeof(prime));
   for(ll i=2;i*i<=n;i++){
    if(prime[i]==0){
        for(ll j=i*i;j<=n;j=j+i){
            prime[j]=1;
        }
    }
   }
   for(ll i=2;i<=n;i++){
    if(prime[i]==0)
        v.push_back(i);
   }
   // for(ll i=2;i<=n;i++){
   //  if(v[i]>=x)
   //  {
   //      cout<<v[i]<<endl;
   //      break;
   //  }
   // }

   for(auto it:v) cout<<it<<endl;
   
   

}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
