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
    string s;cin>>s;
    ll m=-1,x,y,cnt=0,eq=0;
    ll f,g;
    for(ll i=0;i<s.size();i++){
       ll p=s[i]-'0';
       if(p%2==0){
       	if(p>=m){
           m=p;
       	   x=i;
       	}
       	else{
           f=;
           g=i;
           eq++;
       	}
       	
       }
       else cnt++;
    }
    //cout<<cnt<<endl;
    ll p=s[0]-'0';
    ll q=s[s.size()-1]-'0';
    if(cnt==s.size()) cout<<-1<<endl;
    else if(cnt!=s.size() && p<q && p%2==0){
    	swap(s[0],s[s.size()-1]);
    	cout<<s<<endl;
    }
    else if(p>q && eq>=1){
    	swap(s[g],s[s.size()-1]);
    	cout<<s<<endl;
    }
    else{
    	swap(s[x],s[s.size()-1]);
    	cout<<s<<endl;
    }
   
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
