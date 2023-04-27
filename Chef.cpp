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
    string s;
    cin>>s;
    vll v;
    
         if(s[0]==s[1])
            v.push_back(1);
            else v.push_back(0);

            ll p=(int)v[0];
        	ll q=(int)s[0];
         	ll f=p^q;
         	cout<<p<<" "<<q<<endl;
         	cout<<f<<endl;
         	cout<<s[0]-'0'<<endl;
            //cout<<v[0]<<endl;
    //     for(ll i=1;i<n;i++){
    //     	ll p=(int)v[i-1];
    //     	ll q=(int)s[i-1];
    //     	ll f=p^q;
    //     	v.push_back(f);
        	
    //     }

    // for(auto it:v) cout<<it<<" ";
    // 	cout<<endl;

    // ll x=count(v.begin(),v.end(),'1');
    // cout<<x<<endl;
}   

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
