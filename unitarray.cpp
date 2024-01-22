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
    ll a[n];
    ll m=0,p=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]>0) p++;
    	else m++;
    }
    if(p==n) cout<<0<<endl;
    else if(m==n) cout<<n<<endl;
    else if(m%2==0 && m<=p) cout<<0<<endl;
    else if(m%2!=0 && m<=p) cout<<1<<endl;
    else if(m%2!=0 && m==p) cout<<1<<endl;
    else{
    	
    }
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
