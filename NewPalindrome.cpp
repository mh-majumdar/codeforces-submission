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
    string s;cin>>s;
    set<char>a;
    map<char,ll>m;
    bool ans=false;
    for(ll i=0;i<s.size();i++){
    	a.insert(s[i]);
    	m[s[i]]++;
    }
    // cout<<a.size()<<endl;
    // for(auto it:m) cout<<it.first<<" "<<it.second<<endl;
    	if(a.size()==1) ans=true;
    else if(a.size()==2){
    	for(auto it:m){
    		if(it.second<=1) {
    			ans=true;
    			break;
    		}
    }
}
if(ans) no;
else yes;
}
int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
