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
    int n; cin >> n;
    vector <int> a(n);
    map <int, int> mp;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
       cin >> a[i];
       mp[a[i]] = i;
    }
    
    for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
    // for(int i = 1; i < n; i++) {
    //     if(mp[i + 1] < mp[i]) cnt++;
    // }
    // cout << cnt << endl;
}

int main()
{
    Shunno;
    tastcase(t)
    solution();
    return 0;
}
