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
   ll n,q;
   cin>>n>>q;
   ll a[n];
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   }
   
     for(ll i=1;i<n;i++){
     	a[i]=a[i-1]+a[i];
     }
   while(q--){
     ll l,r,k;
     ll m=a[r]-a[l];
     ll test=a[n-1]-m+(r-l+1)*k;
     //cout<<test<<endl;
     if(test%2!=0) yes;
     else no;
     
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
