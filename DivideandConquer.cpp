
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
   ll n;cin>>n;
   ll a[n],s=0;;
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   	s+=a[i];
   }
   if(s%2==0) cout<<0<<endl;
   else{
   	ll x,cnt=0,ans=INT_MAX;
   	for(ll i=0;i<n;i++){
   		cnt=0;
         x=a[i];
         if(a[i]%2==0){
         	while(x%2==0){
         		x/=2;
         		cnt++;
         	}
         }
         else{
         	while(x%2==1){
         		x/=2;
         		cnt++;
         	}
         }
         ans=min(ans,cnt);
   	}
   	cout<<ans<<endl;
   }
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
