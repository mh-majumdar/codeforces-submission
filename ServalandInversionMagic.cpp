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
    ll n;cin>>n;
    string s;cin>>s;
    bool ans=true;
    ll l=0,r=0,temp=0;
    for(ll i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) ans=false;
    }
    if(ans)yes; 
    else{
        ll cnt=0;
        if(s[0]!=s[n-1]) cnt++;
        for(ll i=1;i<n/2;i++){
            if(s[i]!=s[n-i-1]) {
                if(s[i-1]==s[n-i])
                    cnt++;
            }
        }
        //cout<<cnt<<endl;
        if(cnt>1) no;
        else yes;
        
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