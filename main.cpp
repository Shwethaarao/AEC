#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"enter testcase"<<endl;
    cin>>t;
    while(t--){
        int x,y;
        cout<<"enter amount:"<<endl;
        cin>>x>>y;
        if(x>y)
        cout<<y<< "is cheaper"<<endl;
        else if(y>x)
        cout<<x<< "is cheaper"<<endl;
        else
        cout<<x<<"and"<<y<<"cheaper"<<endl; 
    }
    return 0;
    
}