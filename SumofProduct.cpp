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
{
    ///cout<<"Case "<<++caseno<<": ";
   ll n;
   ll m=1000000007,ans=0;
   cin>>n;
   ll a[n],t[n];
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   }

   for(ll i=n-1;i>=0;i--){
      t[i]+=a[i]%m;
      t[i]=t[i]%m;
   }
   for(ll i=0;i<n;i++){
      ans+=a[i]%m*t[i+1]%m;
      ans=ans%m;
   }
   cout<<ans<<endl;
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
