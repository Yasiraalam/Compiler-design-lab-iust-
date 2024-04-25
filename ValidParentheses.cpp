#include<iostream>
#include<vector>

using namespace std;

int main() {
    string str;
    cout << "Enter String" << endl;
    getline(cin, str);
    int i = 0;
    vector<int> v;
    while (i < str.length()) { 
        if (str[i] == '(' || str[i] == '{') {
            v.push_back(5);
            i++;
        } else if (str[i] == ')' || str[i] == '}') {
            v.push_back(4);
            i++;
        } else if (str[i] == '+') {
            v.push_back(2);
            i++;
        } else if (str[i] == '*') {
            v.push_back(3);
            i++;
        } else if(isdigit(str[i])){
            while (i < str.length() && isdigit(str[i])) {
                i++;
            }
            v.push_back(1);
 
        }else{
            v.push_back(0);
        }
    }
    for (int j = 0; j < v.size(); ++j) {
        cout << v[j] << " ";
    }
    cout << endl;

    return 0;
}
