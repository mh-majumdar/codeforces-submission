5
6
28
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
    if(n>=1 && n<=15){
        if(n>=1 && n<=10) cout<<"Lower Double"<<endl;
        else cout<<"Lower Single"<<endl;
    }
    else{
        if(n>=16 && n<=25) cout<<"Upper Double"<<endl;
        else cout<<"Upper Single"<<endl;
    }
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
