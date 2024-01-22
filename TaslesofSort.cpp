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
    ll test=-1,mx=-1,mxx=0,testx=0;
    for(ll i=0;i<n;i++){
    	cin>>a[i];

    }
    mx=a[0];
    ll small=0;
    for(ll i=0;i<n-1;i++){
    	if(mx>a[i+1]){
          small=a[i];
          mx=a[i];
    	}
    }
    cout<<small<<endl;
    // for(ll i=0;i<n;i++){
    //        if(a[i]>mx){
    //        	mx=a[i];
    //        	mxx=i;
    //        }
    // }
    // for(ll i=0;i<n;i++){
    // 	if(a[i]<mx){
    // 		test=min(mx,a[i]);
    // 		testx=i;
    // 	}
    // }
    // if(mx==a[n-1]) cout<<test<<endl;
    // else cout<<mx
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
