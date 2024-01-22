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
    ll n=s.size();
    int num=0;
    string f="";
    bool ff=0;
    for(ll i=0;i<n;i++){
    	for(ll j=i+1;j<=n-1;j++){
    		// ll p=s[i]-'0';
    		// ll q=s[j]-'0';
    		f.clear();
            f.push_back(s[i]);
            f.push_back(s[j]);
            num=stoi(f);
            //cout<<num<<endl;
            if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0)
            {
            	//cout<<num<<endl;
            	ff=1;
            	break;
            }
    	}
    	if(ff=1) break;
    }
    if(ff=0) cout<<-1<<endl;
    else cout<<num<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
