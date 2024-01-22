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
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    bool ans=0;
    for(ll i=0;i<n;i++){
    	if(a[i]==x){
    		ans=1;
    		break;
    	}
    }
    
    if(ans) yes;
    else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
