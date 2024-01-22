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
    ll a,b;cin>>a>>b;
    string s;cin>>s;
    ll ans=0;
    for(ll i=0;i<s.size();i++){
    	if(s[i]=='B'){
    		ans++;
    		i+=b-1;
    	}
    }
    cout<<ans<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
