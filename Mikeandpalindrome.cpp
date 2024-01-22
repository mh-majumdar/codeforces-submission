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
    string s;cin>>s;
    ll ans=0;
    ll n=s.size();
    if(s.size()%2==0){
    	for(ll i=0;i<n/2;i++){
    		if(s[i]!=s[s.size()-1-i]) ans++;
    	}
    	if(ans>=2 || (ans==0 && n%2==0)) no;
        else yes;
    }
    else{
    	for(ll i=0;i<=n/2;i++){
    		if(s[i]!=s[s.size()-1-i]) ans++;
    	}
    	if(ans>=2 || (ans==0 && n%2==0)) no;
        else yes;
    }

}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
