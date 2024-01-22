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
     string x=s;
     reverse(x.begin(),x.end());
     set<char>st;
     map<char,ll>m;
     for(ll i=0;i<n;i++){
     	st.insert(s[i]);
     	m[s[i]]++;
     }
     bool ans=false;
     ll cnt=0;
     for(auto it:m){
     	if(it.second%2!=0){
     		cnt++;
           
     	}
     }
     if(st.size()==n) cout<<0<<endl;
     else if(st.size()==1 && n==2) cout<<1<<endl;
     else if(st.size()==1 && n%2!=0) cout<<2<<endl;
     else if(cnt>=1 && n%2!=0) cout<<1<<endl;
     else if(s!=x) cout<<0<<endl;
     
     else cout<<1<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
