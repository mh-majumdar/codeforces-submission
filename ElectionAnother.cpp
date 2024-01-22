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
    ll a,b,c;
    cin>>a>>b>>c;
    if(max(b,c)>=a) cout<<(max(b,c)+1)-a<<" ";
    else cout<<0<<" ";
    if(max(a,c)>=b) cout<<(max(a,c)+1)-b<<" ";
    else cout<<0<<" ";
    if(max(a,b)>=c) cout<<(max(a,b)+1)-c<<" ";
    else cout<<0<<" ";

    cout<<endl;
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
