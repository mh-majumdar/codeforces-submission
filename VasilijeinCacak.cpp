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
    ll x=(b*(b+1))/2;
    ll y=0;
    while(b--){
    	y+=a;
    	a--;
    }
    if(x>c || y<c) no;
    else yes;
    //cout<<y<<endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
