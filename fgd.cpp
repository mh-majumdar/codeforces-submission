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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout<<a+b<<endl;
    else{
     for(ll i=1;i<=c;i++){
    		ll x=__gcd(a,b);
    		if(a>b) a=x;
    		else b=x;
    		
    	    if(a==b) break;
    	    else{
    	    	ll p=__gcd(a,b);
    		ll q=(a*b)/p; 
    		if(a>b) a=q;
    		else b=q;
    	    }
    	}
    	 cout<<a+b<<endl;
    }
    
    }

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
