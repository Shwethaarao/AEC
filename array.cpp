#include<iostream>
using namespace std;
int main(){
    int a[100],n,i;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"given array"<<endl;
    for(int i=0;i>n;i++)
    cout<<a[i];
    cout<<"reverse ordered array"<<endl;
    for(int i=n;i>0;i--)
    cout<<a[i];
    return 0;
}
