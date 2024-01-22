#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl



void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    ll n,x;
    cin>>n>>x;
    vector<double>v;
    for(ll i=0;i<n;i++){
    	double p;cin>>p;
    	v.push_back(p);
    }
    sort(v.begin(),v.end());
    double ans=-1;
    for(ll i=0;i<v.size()-1;i++){
    	ans=max(ans,abs(v[i]-v[i+1]));
    }
    ans=max({ans/2,v[0],x-v[n-1]});
    //cout<<ans<<endl;
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
