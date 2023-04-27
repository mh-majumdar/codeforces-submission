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
    string a="",b="",c="",d="",e="",f="";
    ll x=2*n-2;
    vector<string> v1;
     vector<string> v2;
    for(ll i=0;i<x/2;i++){
    	string p;
    	cin>>p;
    	v1.push_back(p);
    }
    for(ll i=(x/2);i<x;i++){
    	string p;
    	cin>>p;
    	reverse(p);
    	v2.push_back(p);
    }
     //vsort(v1);
     //for(auto it:v1) cout<<it<<" ";

     for(ll i=0;i<x/2;i++){
     	if(v1[i].size()==1) a=v1[i];
     	else if(v1[i].size()==n-1) b=v1[i];
     }
     c=a+b;
     d=c;
     reverse(d);

     e=b+a;
     f=e;
     reverse(f);
     if(c==d || e==f) yes;
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