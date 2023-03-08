#include <iostream>
#include<string>
using namespace std;

int isVowel(char ch){
    return ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        int flag=0;
        cin>>s;
        for(int i=0;i<s.length()-2;i++){
            if(isVowel(s[i])&&isVowel(s[i+1])&&isVowel(s[i+2])){
            flag=1;
            break;}
        }
        if(flag){
            cout<<"Happy"<<endl;
        }
        else{
            cout<<"Sad"<<endl;
        }
        
	}
	return 0;
}