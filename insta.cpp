#include<iostream>
using namespace std;
int main(){
    int follower,following;
    int t;
    cout<<"enter the testcase"<<endl;
    cin>>t;
    while(t--){
        cout<<"enter followers count :"<<endl;
        cin>>follower;
        cout<<"enteer the following count :"<<endl;
        cin>>following;
        if(following>=follower*10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}