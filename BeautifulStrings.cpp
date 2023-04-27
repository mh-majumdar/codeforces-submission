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
    map<char,ll>m;
    for(ll i=0;i<s.size();i++){
    	m[s[i]]++;
    }
    bool ans=true;
    for(auto it:m)
    	{
    		if(it.second%2!=0){
    			ans=false;
    			break;
    		}
    	}
    	if(!ans) cout<<"No"<<endl;
    	else cout<<"Yes"<<endl;
  
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
