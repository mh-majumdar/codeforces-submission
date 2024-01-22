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
    if(n%2==0){
    	ll temp=2;
    	while(n!=0){
            cout<<temp<<" ";
            temp+=2;
            n--;
    	}
    	cout<<endl;
    }
    else{
    	for(ll i=1;i<=n;i++){
    		cout<<i<<" ";
    	}
    	cout<<endl;
    }
    
 }

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
