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
    ll n,x;cin>>n;
    ll a[7];
    bool ans=false;
    
    
    for(ll i=0;i<7;i++){
    	cin>>a[i];
    }
    for(ll i=0;i<=1000;i++){
    	for(ll j=0;j<7;j++){
    		n-=a[j];
    		//cout<<n<<endl;
    		if(n<=0){
    			x=j+1;
    			ans=true;
    			break;
    		}
    		
    	}
    	if(ans==true) break;
    }
    cout<<x<<endl;
    
   
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
