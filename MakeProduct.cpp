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
   ll a[n],neg=0,ans=0,zero=0;
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   	if(a[i]<0) neg++;
   	if(a[i]==0) zero++;
   }
   for(ll i=0;i<n;i++){
     	if(a[i]!=1 || a[i]!=-1) 
     		ans+=abs(abs(a[i])-1);
        }
   if(neg%2==0) cout<<ans<<endl;
   else if(neg%2!=0 && zero>=1) cout<<ans<<endl;
   else{
   	cout<<ans+2<<endl;
   } 
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
