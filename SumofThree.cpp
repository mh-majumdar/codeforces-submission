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
    double p=n-1;
    ll x=ceil(p/2);
    ll y=floor(p/2);
    //cout<<x<<" "<<y<<endl;
    if(x!=1 && y!=1 && x!=y) {
    	yes;
    	cout<<1<<" "<<x<<" "<<y<<endl;
    }
    else if(((x-1)%3!=0 || (y-1)%3!=0) && x!=1 && y!=1) {
    	yes;
    	cout<<2<<" "<<x<<" "<<" "<<y<<endl;
    }
    else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
