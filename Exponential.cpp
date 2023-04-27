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
    set<ll>s;
    vll v;
    for(ll i=1;i<=32;i++){
        for(ll j=2;j<=10;j++){
            double d=pow(i,j);
        if(d<=1000)
            s.insert(d);
        }
    }
    for(auto it:s)
        {
            v.push_back(it);
        }
        for(ll i=0;i<v.size();i++){
            if(v[i]==n){
                cout<<v[i];
                break;
            }
            else if(v[i]>=n && v[i]<=1000){
                cout<<v[i-1];
                break;
            }

        }
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
