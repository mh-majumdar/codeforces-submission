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
    char a[10][10];
    for(ll i=0;i<10;i++){
    	for(ll j=0;j<10;j++){
    		cin>>a[i][j];
    	}
    }
    ll ans=0;
    for(ll i=0;i<10;i++){
    	for(ll j=0;j<10;j++){
    		if(a[i][j]=='X'){
    			if(i==0 || i==9 || j==0 || j==9) ans+=1;
    			else if(i==1 || i==8 || j==1 || j==8) ans+=2;
    			else if(i==2 || i==7 || j==2 || j==7) ans+=3;
    			else if(i==3 || i==6 || j==3 || j==6) ans+=4;
    			else ans+=5;
    		}
    	}
    }
    cout<<ans<<endl;

}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
