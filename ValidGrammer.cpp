#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
    ({  - 4
   )}  - 5
   degit  - 6
   +  - 2
   *  - 3

*/

 vector<int> GetTokens(string grammer,vector<int> v){
    int i=0;
    while(i<grammer.length()){
        if(grammer[i]=='(' || grammer[i]=='{'){
            v.push_back(4);
            i++;
        }
        else if(grammer[i]==')' || grammer[i]=='}'){
            v.push_back(5);
            i++;
        }
        else if(grammer[i]=='+'){
            v.push_back(2);
            i++;
        }
        else if(grammer[i]=='*'){
            v.push_back(3);
            i++;
        }
        else if(isdigit(grammer[i])){
                while (i<grammer.length() || isdigit(grammer[i])){
                    i++;
                }
                v.push_back(6);
        }
    
    }
}
vector<int> optimergrammer(vector<int> &tokenvector) {
    int i = 0;
    while (i <= tokenvector.size() - 2) {
        if (tokenvector[i] == 6 && tokenvector[i + 1] == 2 && tokenvector[i + 2] == 6) {
            tokenvector[i] = 6;
            tokenvector.erase(tokenvector.begin() + i + 1, tokenvector.begin() + i + 3);
        }
        else if (tokenvector[i] == 6 && tokenvector[i + 1] == 3 && tokenvector[i + 2] == 6) {
            tokenvector[i] = 6;
            tokenvector.erase(tokenvector.begin() + i + 1, tokenvector.begin() + i + 3);
        }
        else if (tokenvector[i] == 4 && tokenvector[i + 1] == 6 && tokenvector[i + 2] == 5) {
            tokenvector[i] = 6;
            tokenvector.erase(tokenvector.begin() + i + 1, tokenvector.begin() + i + 3);
        }
        else {
            i++;
        }
    }
    return tokenvector;
}
int main(){

vector<int> v(20);
vector<int> tokenvector(20);
vector<int> result(20);
string grammer;
cout<<"Enter your grammer:"<<endl;
getline(cin,grammer);
tokenvector = GetTokens(grammer,v);
for (int i = 0; i < tokenvector.size(); i++)
{
   cout<<tokenvector[i];
}

result = optimergrammer(tokenvector);
for (int i = 0; i < result.size(); i++)
{
    cout<<result[i]<<" ";
}





return 0;
}