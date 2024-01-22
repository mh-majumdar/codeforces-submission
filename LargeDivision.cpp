#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
ll caseno;


void solution()
{
    cout<<"Case "<<++caseno<<": ";
    string s;ll n;
    cin>>s>>n;
    ll ans=0;
    for(ll i=0;i<s.size();i++){
    	if(s[i]=='-') continue;
       ans=(ans*10+(abs(s[i]-'0')))%n;
    }
    //cout<<ans<<endl;
    if(ans==0) cout<<"divisible"<<endl;
    else cout<<"not divisible"<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
