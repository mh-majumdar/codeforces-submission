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
    ll a,b;cin>>a>>b;
    if(b%a!=0){
    	cout<<-1<<endl;
    	return;
    }
    if(a==b){
    	cout<<0<<endl;
    	return;
    }
    ll n=b/a;
    vector<ll>factors;
    for(ll i=2;i<=sqrt(n);i++){
    	while(n%i==0){
    		factors.push_back(i);
    		n/=i;
    	}
    }
    if(n>1) factors.push_back(n);
    if(factors.back()==3 || factors.back()==2) cout<<factors.size()<<endl;
    else cout<<-1<<endl;
    
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
