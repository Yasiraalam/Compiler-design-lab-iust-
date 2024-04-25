#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter String: "<<endl;
    cin>>str;

    int st = 0;
    int end = str.length() - 1;

    while(st <= end){
        if(str[st] != str[end]){
            cout<<"Not palindrome"<<endl;
            break;
        }
        st++;
        end--;
    }

    if(st > end){
        cout<<"Palindrome"<<endl;
    }

    return 0;
}
