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
    ll n;cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    ll temp=1;
    for(ll i=0;i<n;i++){
    	if(a[i]==temp) temp=a[i]+1;
    	temp++;
    }
    cout<<temp-1<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
