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
   vector<ll>v;
   if(n<=1) cout<<n<<endl;
   else{
   	for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0 && i!=n/i){
            v.push_back(i);
            v.push_back(n/i);
        }
        else if(n%i==0 && i==n/i) v.push_back(i);
    }
    sort(v.begin(),v.end());
    // for(auto it:v) cout<<it<<" ";
    // 	cout<<endl;
    vector<ll>s;
    string f="";
    ll i=0;
    ll j=v.size()-1;
    while(i<=j){
        f.clear();
    	string x=to_string(v[i]);
    	string y=to_string(v[j]);
    	if(x.size()<=1 && y.size()<=1){
          int p=stoi(x);
    	int q=stoi(y);
    	f+=x;
    	f+=y;
    	int temp=stoi(f);
    	s.push_back(temp);
    	}
    	i++;
    	j--;
    }
    string temp=to_string(n);
    ll m=count(temp.begin(),temp.end(),'0');
    
     sort(s.begin(),s.end());
     // for(auto it:s) cout<<it<<endl;
     // 	cout<<endl;
     if(v.size()==2 && n<=9) cout<<n<<endl;
     else if(v.size()==2 && m==0) cout<<1<<n<<endl;
     else if(s.size()>=1) cout<<s[0]<<endl;
     else cout<<-1<<endl;
   }
   
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
