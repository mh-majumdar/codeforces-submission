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
    vector<string>v;
    vector<string>y;
    for(ll i=0;i<n;i++){
        string x;cin>>x;
        v.push_back(x);
    }
     
    reverse(v.begin(),v.end());
    map<string,ll>m;
    for(ll i=0;i<n;i++){
        m[v[i]]++;
        auto g=m.second;
        if(g==1){
            y.push_back(v[i]);
        }
    }


}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
