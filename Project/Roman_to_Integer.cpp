#include <iostream>
#include <map>
using namespace std;



int main(){
    string input;
    cin >> input;

    // MDCLXVI
    map<char, int> vals{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
    int prevVal = 0;
    int total = 0;
    for(int i = input.length() - 1; i >= 0; i--){
        int curVal = vals[input[i]];
        if(curVal >= prevVal)
            total += curVal;
        else
            total -= curVal;
        prevVal = curVal;
    }
    cout << total;




    return 0;
}
