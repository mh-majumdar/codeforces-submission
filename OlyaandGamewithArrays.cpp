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
    ll n;cin>>n;
    vector<vector<ll>>v;
    while(n--){
        ll x;cin>>x;
        vector<ll>a;
        while(x--){
            ll y;cin>>y;
            a.push_back(y);
        }
        sort(a.begin(),a.end());
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll temp=v[0][0];
    ll l=INT_MAX;
    ll index=0;
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j<v[i].size();j++){
         if(v[i][j]<l && v[i][j]>temp){
            l=min(l,v[i][j]);
            index=i;
         }
        }
    }
    

    ll an=v[0][0];
    //cout<<index<<endl;
    for(ll i=0;i<v.size();i++){
        if(i==index) continue;
        else {
            an+=v[i][1];
            //cout<<v[i][1]<<endl;
        }
    }
    cout<<an<<endl;
    
    
    }

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}