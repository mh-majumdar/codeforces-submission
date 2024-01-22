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
   string s;cin>>s;
   cout<<s<<endl;
   string ans="";
   ans+=s[0];
   char ch=s[0];

   for(ll i=1;i<n;i++){
   	char x=s[i];
   	cout<<x<<endl;
   	if(x==ch){
        char y=s[i+1];
        ans+=y;
        ch=s[i+1];
   	}
   }
   cout<<ans<<endl;
   
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
