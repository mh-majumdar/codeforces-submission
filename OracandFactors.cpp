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
    ll n,k;
    cin>>n>>k;
    vll v;
    for(ll i=1;i<=n;i++){
    	if(n%i==0)
    		v.push_back(i);
    }
    if(n%2==0) cout<<n+2*k<<endl;
    else if(v.size()==2){
    	n+=n;
    	n=n+2*(k-1);
    	cout<<n<<endl;
    }
    else{
        n+=v[1];
        n=n+2*(k-1);
        cout<<n<<endl;
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
