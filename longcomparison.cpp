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
   string a,c;
   ll b,d;
   cin>>a>>b>>c>>d;

   while(b--){
   	a+='0';
   }
   while(d--){
   	c+='0';
   }
   ll l=a.compare(c);
   cout<<a<<" "<<c<<endl;
   cout<<l<<endl;
   if(l==0) cout<<"="<<endl;
   else if(l<0) cout<<"<"<<endl;
   else if(l>0) cout<<">"<<endl;
}

int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
