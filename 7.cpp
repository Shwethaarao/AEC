#include <bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int min_diff=INT_MAX;
        sort(arr,arr+n);
        for(int i=1;i<n;++i){
            int d=arr[i]-arr[i-1];
            if(d<min_diff){
                min_diff=d;
            }
        }
        cout<<min_diff<<endl;
    }
    return 0;
}