#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl

ll mul(ll a,ll b,ll c,ll d,ll e){
    ll p=min(e,a-c);
    a=a-p;
    e=e-p;
    ll q=min(e,b-d);
    b=b-q;
    return(a*b);
}

void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    ll x=mul(a,b,c,d,e);
    ll y=mul(b,a,d,c,e);
    cout<<min(x,y)<<endl;
    

}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
