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
    vector<ll>v;
    if(n%2==0){
        for(ll i=1,j=n;i<=n/2;i++,j--){
            v.push_back(i);
            v.push_back(j);
        }
    }
    else{
        for(ll i=1,j=n;i<=n/2;i++,j--){
            v.push_back(i);
            v.push_back(j);
        }
        v.push_back(n/2+1);
    }
    for(auto it:v) cout<<it<<" ";

    cout<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}