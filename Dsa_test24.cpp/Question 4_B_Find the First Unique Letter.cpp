//Example 2
//Input: code = "loveleetcode"
//Output: 2
//Explanation: The character "v" is the first character that appears only once.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "loveleetcode";

    for (int i = 0; i < code.length(); i++) {
        bool unique = true;

        for (int j = 0; j < code.length(); j++) {
            if (i != j && code[i] == code[j]) {
                unique = false;
                break;
            }
        }

        if (unique) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}