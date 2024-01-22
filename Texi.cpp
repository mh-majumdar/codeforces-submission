#include<bits/stdc++.h>
using namespace std;

#define   Shunno                  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   vll                    vector<ll>
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl
#define   vsort(a)               sort (a.begin(),a.end())
#define   gvsort(a)              sort(a.begin(), a.end(), greater<ll>())
#define   reverse(a)             reverse(a.begin(),a.end())



void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
   ll n;cin>>n;
   ll one=0,two=0,three=0,four=0,ans;
   ll a[n];
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   }
   one=count(a,a+n,1);
    two=count(a,a+n,2);
     three=count(a,a+n,3);
      four=count(a,a+n,4);

      //cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
      ans=four+two/2+one/4;
      //cout<<ans<<endl;
      one=one%4;
      two=two%2;
      //cout<<one<<" "<<two<<endl;
      if(two*2+one<=4){
        one+=two*2;
        ans+=min(one,three);
        ll one1=one-min(one,three);
        ll three1=three-min(one,three);
        cout<<one1<<" "<<three1<<endl;
        if(one1==0) cout<<ans+three1<<endl;
        else cout<<ans+1<<endl;
      }
      else{
        ans+=min(one,2*two);
        one=one-min(one,2*two);
        ans+=min(one,three);
         ll one1=one-min(one,three);
        ll three1=three-min(one,three);
         if(one1==0) cout<<ans+three1<<endl;
        else cout<<ans+1<<endl;
      }  
}

int main()
{
    Shunno;
    ///seive();
    //tastcase(t)
    solution();
    return 0;
}
