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

ll binary_exponential(ll a,ll b){
  if(b==0) return 1;
  ll ans=binary_exponential(a,b/2);
  if(b%2==0){
  	return ans*ans;
  }
  else{
  	return a*ans*ans;
  }
}

void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    cout<<binary_exponential(2,);
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
