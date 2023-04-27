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
    s=to_string(n);
    ll l=s.size();
    if(n<=9){
    	cout<<n<<n<<endl;
    }
    else if(s[s.size()-1]!='0'){
       ll x=ceil(n/10);
       ll y=x*s.size()+2;
       while(y--){
       	cout<<s[s.size()-1];
       }
    }
    else if(s[s.size()-1]=='0'){
    	ll x=n/10;
    	ll y=x*s.size();
    	cout<<1;
    	while(y--){
    		cout<<0;
    	}
    	cout<<1;
    }
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
