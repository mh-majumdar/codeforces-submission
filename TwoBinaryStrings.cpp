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
    string a,b;
    cin>>a>>b;
    bool ans=0;
    for(ll i=0;i<a.size();i++){
    	if(a[i]=='1' && b[i]=='1'){
    		ans=1;
    		break;
    	}
    }
    if(ans==1) yes;
    else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
