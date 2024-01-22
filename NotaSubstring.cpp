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
    bool ans=false;
    if(s.size()==2 && s=="()") no;
    else{
    	yes;
    	 for(ll i=0;i<s.size()-1;i++){
    	 	if((s[i]=='(' && s[i+1]==')' || (s[i]==')' && s[i+1]=='('))) {
               ans=true;
    	 	}
    	 	else{
    	 		ans=false;
    	 		break;
    	 	}
    	 }
    	 if(ans){
    	 	for(ll i=1;i<=s.size();i++){
    	 		cout<<"(";
    	 	}
    	 	for(ll i=1;i<=s.size();i++){
    	 		cout<<")";
    	 	}
    	 	cout<<endl;
    	 }
    	 else{
    	 	for(ll i=1;i<=s.size();i++){
    	 		cout<<"(";
    	 		cout<<")";
    	 	}
    	 	cout<<endl;
    	 }
}
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
