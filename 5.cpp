#include<bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        m-=k;
        if(n<=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}