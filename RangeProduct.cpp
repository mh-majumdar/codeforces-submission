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
    ll a,b;
    cin>>a>>b;
    if((a<0 && b>0) || a==0 || b==0) cout<<"Zero"<<endl;
    else if(a>0 && b>0) cout<<"Positive"<<endl;
    else if(a<0 && b<0){
        if((abs(b)-abs(a)+1)%2==0) cout<<"Positive"<<endl;
        else cout<<"Negative"<<endl;
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
