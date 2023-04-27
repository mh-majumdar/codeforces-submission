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
    // if(a==1 & b==1){
    // 	cout<<1<<endl;
    //  	cout<<a<<" "<<b<<endl;
    // }
    // else if(a==b & b!=1){
    // 	cout<<2<<endl;
    // 	ll p=2;
    // 	ll q=1;
    // 	cout<<p<<" "<<q<<endl;
    //  	cout<<a<<" "<<b<<endl;
    // }
    // else if(a%2==0 && b%2!=0 || a%2!=0 && b%2==0 ){
    // 	cout<<2<<endl;
    // 	ll pp=a+1;
    // 	ll qq=b+1;
    // 	cout<<pp<<" "<<qq<<endl;
    //  	cout<<a<<" "<<b<<endl;
    // }
    // else{
    // 	cout<<2<<endl;
    // 	ll ppp=a+1;
    // 	ll qqq=b+2;
    // 	cout<<ppp<<" "<<qqq<<endl;
    //  	cout<<a<<" "<<b<<endl;
    // }

    cout<<2<<endl;
    cout<<1<<" "<<b-1<<endl;
    cout<<a<<" "<<b<<endl;

         
}
int main()
{
    Shunno;
    ///seive();
    tastcase(t)
    solution();
    return 0;
}
