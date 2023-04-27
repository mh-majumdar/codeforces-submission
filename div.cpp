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
   ll a,b,c,x,y,z,bb=0;
   cin>>a>>b>>c;
   ll aa=floor(b/c)+b%c;
   x=b-(b%c+1);
   if(x>=a){
    bb=floor(x/c)+x%c;
   }
   cout<<max(aa,bb)<<endl;
   }
int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
