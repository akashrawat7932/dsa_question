//Example 2
//Input: rollNumbers = [1, 2, 3, 4]
//Output: false
//Explanation: Every roll number is unique.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& rollNumbers) {
    unordered_set<int> seen;

    for (int roll : rollNumbers) {
        if (seen.find(roll) != seen.end()) {
            return true;
        }

        seen.insert(roll);
    }

    return false;
}

int main() {
    vector<int> rollNumbers = {1, 2, 3, 4};

    if (containsDuplicate(rollNumbers)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
