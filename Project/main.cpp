#include <iostream>

using namespace std;


static bool isPalindrome(int x) {
    string str = to_string(x);
    for(int i = 0; i < str.length() / 2; i++){
        if(str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}



int main()
{
    int input;
    cin >> input;

    cout << isPalindrome(input);

    return 0;
}
