#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        int res,arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;arr[i]!=arr[i+1];i++){
            if(arr[i]!=arr[i+1])
            res=i+1;
                cout<<res<<endl;
        }


    }

}
