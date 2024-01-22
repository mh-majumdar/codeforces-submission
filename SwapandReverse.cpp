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
    ll a,b;cin>>a>>b;
    string s;cin>>s;
    if(b%2==0){
    	sort(s.begin(),s.end());
    	cout<<s<<endl;
    }
    else{
    	string x="",y="";
    	for(ll i=0;i<a;i++){
    		if(i%2==0) x+=s[i];
    		else y+=s[i];
    	}
    	sort(x.begin(),x.end());
    	sort(y.begin(),y.end());
    	//cout<<x<<" "<<y<<endl;

        for(ll i=0;i<a;i++){
           if(i<x.size()) cout<<x[i];
           if(i<y.size()) cout<<y[i];
        }
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
