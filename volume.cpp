#include<iostream>
using namespace std;
int main(){
    int v,v1,v2,t;
    cout<<"enter testcase:"<<endl;
    cin>>t;
    cout<<"enter volume:"<<endl;
    cin>>v;
    while(t--){
    cout<<"enter volume to be updated:"<<endl;
    cin>>v1;
    if(v>v1)
    v2=v-v1;
    else
    v2=v1-v;
    cout<<"The volume to be updated is"<<v2<<endl;
    }
    return 0;
}