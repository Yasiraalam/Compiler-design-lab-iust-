#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isSubString(string &mainString, string &subString) {
    for (int i = 0; i <= mainString.size() - subString.size(); ++i) {
        bool found = true;
        for (int j = 0; j < subString.size(); ++j) { // corrected the increment of j
            if (mainString[i + j] != subString[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

int main() {
    string mainString;
    string subString;
    cout << "Enter Grammar:" << endl;
    getline(cin, mainString);
    cout << "Enter SubString:" << endl;
    getline(cin, subString);
    if (isSubString(mainString, subString)) {
        cout << "SubString is present in the main String." << endl;
    } else {
        cout << "Substring is not present in the main String" << endl;
    }

    return 0;
}
