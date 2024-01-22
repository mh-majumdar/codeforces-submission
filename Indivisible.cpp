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
   vll pair;
   vll div;
   for(ll i=1;i<n;i++){
   	for(ll j=i+1;j<=n;j++){
   		pair.push_back(j-i+1);
   	}
   }
   for(auto it:pair) cout<<it<<" ";

   for(ll i=1;i<=sqrt(n);i++){
   	if(n%i==0) 
   		{
   			div.push_back(i);
   		   	  if(i!=n/i) div.push_back(n/i);
   		   	}
   }

   vsort(div);
   cout<<endl;
   for(auto it:div) cout<<it<<" ";
   	cout<<endl;

   bool ans=false;
   for(ll i=0;i<pair.size();i++){
   for(ll j=0;i<div.size();j++){
   	if(pair[i]==div[j]){
   		ans=true;
   		break;
   	}
   }
   }
   if(n==1) cout<<1<<endl;
   else if(ans) cout<<-1<<endl;
   else{
   	for(ll i=1;i<n;i++){
   		cout<<i<<" ";
   	}
   	cout<<endl;
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
