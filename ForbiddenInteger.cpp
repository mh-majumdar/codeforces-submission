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
    if(c!=1){
    	yes;
    	cout<<a<<endl;
    	while(a--){
    		cout<<1<<" ";
    	}
    	cout<<endl;

    }
    else{
       if(a/b==c || a%b==c || b==c ) no;
    else{
    	yes;
    	ll x=a/b;
    	ll y=a%b;
    	if(a%b==0){
    		cout<<a/b<<endl;
    		for(ll i=1;i<=a/b;i++){
    			cout<<b<<" ";
    		}
    		cout<<endl;
    	}
    	else{
    		cout<<x+y<<endl;
           for(ll i=1;i<=x;i++){
    		cout<<x<<" ";
    	}
    	cout<<y<<endl;
    	}
    	
    }

    }
    }

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
