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
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    //sort(a,a+n);
    ll x,index,test=0;
    bool ans=false;
    bool bl=false;
    for(ll i=0;i<n;i++){
        test=0;
    	for(ll j=0;j<n;j++){
    		if(a[i]%a[j]!=0){
                   test++;
                   x=a[i];
                   index=j;         
    		}
    		if(test==n-1){
                bl=true;
    			break;
    		}
    	}
    	if(bl) break;
    }
    if(test==n-1){
    	//cout<<"Passed"<<endl;
    	cout<<n-1<<" "<<1<<endl;
    	for(ll i=0;i<n;i++){
    		if(i==index) continue;
    		else cout<<a[i]<<" ";
    	}
    	cout<<endl;
    	cout<<x<<endl;
    }
    else cout<<-1<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
