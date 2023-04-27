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
    string s;
    cin>>s;
    ll c=0,lower=0;
    for(ll i=2;i<=s.size()-2;i++){
    	if(s[i]=='C')
       c++;
    }
    for(ll i=0;i<s.size();i++){
    	if(s[i]>='a' && s[i]<='z')
        lower++;
    }
    if(s[0]=='A' && c==1 && lower==s.size()-2) cout<<"AC"<<endl;
    else cout<<"WA"<<endl;
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
