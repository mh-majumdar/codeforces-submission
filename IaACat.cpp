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
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
     string a="",b="meow";
    a+=s[0];
    for(ll i=0;i<s.size()-1;i++){
   	if(s[i]!=s[i+1])
   	{
   		a+=s[i+1];
   	}
   }
    if(a==b) yes;
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
