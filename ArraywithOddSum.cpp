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
   ll n,c=0,d=0,sum=0;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   	if(a[i]%2!=0) c++;
   	else d++;
   	sum+=a[i];
   }
   // ll x=accumulate(a,a+n,0LL);
   // cout<<x<<endl;
   // cout<<d<<" "<<c<<endl;
   if(sum%2!=0) yes;
   else if(c>=1 && d>=1) yes;
   else no;
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
