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
    string s;
    cin>>s;
    ll temp=0,x=b,y=0;
    bool ans=false;
    for(ll i=0;i<c;i++){
    	if(b>=a){
    		ans=true;
    		break;
    	}
    	if(s[i]=='+'){
    		b++;
    		x++;
    	}
    	if(s[i]=='-'){
    		b--;
    	}
    }
    if(ans==true || b>=a) yes;
    else if(x>=a){
    	if(ans) yes;
    	else cout<<"MAYBE"<<endl;
    }
    else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}