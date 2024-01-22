#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl

int digitsum(ll n){
	ll digit=0;
  while(n!=0){
       ll x=n%10;
       digit+=x;
       n=n/10;
  }
  return digit;
}

void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    string s;cin>>s;
    if(s.size()==1) cout<<0<<endl;
    else{
    	ll sum=0,cnt=1;
    map<char,ll>m;
    for(ll i=0;i<s.size();i++){
    	//ll x=s[i]-'0';
    	m[s[i]]++;
    }
    //for(auto it:m) cout<<it.first<<" "<<it.second<<endl;

    for(auto it:m) sum+=(it.first-'0')*it.second;
    	//cout<<sum<<endl;

    while(sum>9){
    	//cout<<sum<<endl;
      sum=digitsum(sum);
      cnt++;
    }
    cout<<cnt<<endl;
    }
    

}


int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
