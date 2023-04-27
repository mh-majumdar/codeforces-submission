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
   cin>>n;
   ll a[n],b[n];

   for(ll i=0;i<n;i++){
   	cin>>a[i];
   	   }

   	   for(ll i=0;i<n;i++){
   	      cin>>b[i];
   	   }
   	   if(n==1 && a[0]>b[0]) yes;
   	   else if(n==1 && a[0]<b[0]) no;
   	   else{
   	   	vll v1;
   	   	vll v2;
   	   for(ll i=0;i<n;i++){
   	   	if(b[i]==0){
   	   	v1.push_back(a[i]-b[i]);
   	   }
   	   	else {
   	   		v2.push_back(a[i]-b[i]);
   	   	}
   	   }
   	   vsort(v2);
   	   vsort(v1);
   	   //cout<<v2[0]<<" "<<v2[n-1]<<" "<<v1[n-1]<<endl;
   	   ll l2=v2.size();
   	   ll l1=v1.size();
   	   if(v2[0]==v2[l2-1] && v1[l1-1]<=v2[l2-1]) yes;
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
