//Example 3
//Input: code = "aabb"
//Output: -1
//Explanation: Every character appears more than once.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "aabb";

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