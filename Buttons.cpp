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
     int a,b,c;
    cin>>a>>b>>c;

    if(c==0) {
        if(a>b)cout<<"First"<<endl;
        else cout <<"Second"<<endl;
    }
   
       else{
       	if((a+c-c/2)>b+c/2) cout<<"First"<<endl;
       	else cout<<"Second"<<endl;
       }
    }

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
