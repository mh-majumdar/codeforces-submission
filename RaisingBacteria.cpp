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
    ll n;cin>>n;
    ll a;
    double b,c,d;
    a=log2(n);
    b=pow(2,a);
    if(n-b==0) cout<<1<<endl;
    else{
    	c=pow(2,a);
    	a++;
    	d=pow(2,a);
    	cout<<min(abs(c-n),abs(n-d))+1<<endl;
    	// cout<<a<<endl;
    	// cout<<c<<" "<<d<<endl;
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
