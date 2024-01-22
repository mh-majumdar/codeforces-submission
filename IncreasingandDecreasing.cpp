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
    bool ans=false;
    vector<ll>v(c);
    v[0]=a,v[c-1]=b;
    ll x=0;
    for(ll i=c-2;i>=1;i--){
        v[i]=b-1;
        b=b-2+x;
        x--;

    }
    // for(auto it:v) cout<<it<<" ";
    // 	cout<<endl;

    for(ll i=0;i<v.size()-2;i++){
      if(v[i+1]-v[i]<=v[i+2]-v[i+1]){
      	ans=true;
      }
    }
    if(ans) cout<<-1<<endl;
    else{
      for(auto it:v) cout<<it<<" ";
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
