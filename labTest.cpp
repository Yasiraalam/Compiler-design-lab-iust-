#include <bits/stdc++.h>
using namespace std;
bool isSubstring(string& substring, string& mainString) {

    if(mainString.size() < substring.size()){
        return false;
    }
        
    bool found = true;
    for (int i = 0; i <= mainString.size() - substring.size(); i++) {
        for (int j = 0; j < substring.size(); ++j) {
            if (mainString[i + j] != substring[j]) {
                  found = false;
                    break;
                }
            }
         if (i == substring.length()) {
            found = true;
            break;
        }
        
    } 
    return false;
    
}

int main() {
    string mainString;
    string substring;
    cout<<"Enter Grammer"<<endl;
    getline(cin,mainString);
    cout<<"Enter substring"<<endl;
    getline(cin,substring);
    if (isSubstring(mainString, substring)) {
        cout << "substrings are present in the main string." << endl;
    } else {
        cout << "substring is not present in the main string." <<endl;
    }

    return 0;
}
