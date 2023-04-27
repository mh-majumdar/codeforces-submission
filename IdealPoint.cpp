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
    ll temp=n;
    ll cover=0,uncover;
    while(n--){
     ll a,b;
     cin>>a>>b;
     if(k>=a && k<=b) cover++;
    }
     uncover=temp-cover;
    // cout<<cover<<endl;
    // cout<<uncover<<endl;
    if(cover>1) yes;
    else no;
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
