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
   ll a[n],b[n];
   ll a1=0,b1=0,ans=0,chcek=0;
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   	if(a[i]==1) a1++;
   }
   for(ll i=0;i<n;i++){
   	cin>>b[i];
   	if(b[i]==1) b1++;
   }
   ans=abs(a1-b1);
   for(ll i=0;i<n;i++){
   	if(a[i]!=b[i]) chcek++;
   }
   if(chcek==ans) cout<<ans<<endl;
   else cout<<ans+1<<endl;

}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
