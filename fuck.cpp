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
    ll a[n];
    ll even=0,odd=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(even==n || odd==n) yes;
    else if(abs(even-odd)==1) yes;
    else if(odd%2!=0) no;
    else no;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
