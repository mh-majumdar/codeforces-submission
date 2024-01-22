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
  ll a[3],b[3];
  set<ll>s;
  ll zero=0;
  for(ll i=0;i<3;i++){
  	cin>>a[i];
  	if(a[i]==0) zero++;
  	b[i]=a[i];
  	s.insert(a[i]);
  }

  if(s.size()==1) cout<<1<<" "<<1<<" "<<1<<endl;

  else if(s.size()==2){
  	sort(b,b+3);
  	ll oc=count(a,a+3,b[2]);
  	//cout<<oc<<endl;
  	for(ll i=0;i<3;i++){
  		if(a[i]!=b[2]) cout<<(b[2]-a[i])+1<<" ";
  		else if(zero==2) cout<<0<<" ";
  		else if(a[i]=b[2] && oc==1) cout<<0<<" ";
  		else cout<<1<<" ";
  		
  	}
  	cout<<endl;
  }
  else{
  	sort(b,b+3);
  for(ll i=0;i<3;i++){
  	if(a[i]!=b[2]) cout<<(b[2]-a[i])+1<<" ";
  	else cout<<0<<" ";
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
