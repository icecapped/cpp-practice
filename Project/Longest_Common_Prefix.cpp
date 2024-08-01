#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int minLen = INT_MAX;
    for(string str : strs) minLen = str.length() < minLen ? str.length() : minLen;

    for(int i = 0; i < minLen; i++){
        for(int q = 1; q < strs.size(); q++){
            if(strs[0][i] != strs[q][i]) return strs[0].substr(0, i);
        }
    }
    return strs[0].substr(minLen);
}

int main(){
    string str;
    getline(cin, str);

    vector<string> vec;


    // Line parsing into tokens
    string cur = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            vec.push_back(cur);
            cur = "";
        }
        else
            cur += str[i];
    }
    if(cur != ""){
        vec.push_back(cur);
    }

    cout << longestCommonPrefix(vec);

    return 0;
}
