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
    string a,b;
    cin>>a>>b;
    if(a.size()>b.size()) cout<<"GREATER"<<endl;
    else if(a.size()<b.size()) cout<<"LESS"<<endl;
    else{
    	if(a>b) cout<<"GREATER"<<endl;
    	else if(a<b) cout<<"LESS"<<endl;
    	else cout<<"EQUAL"<<endl;
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
