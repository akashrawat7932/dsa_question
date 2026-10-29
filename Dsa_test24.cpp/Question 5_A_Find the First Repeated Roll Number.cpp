//A teacher records the roll numbers of students who submitted their assignments. Due to a mistake, some roll
//numbers may have been entered more than once.
//You are given an integer array rollNumbers. Return true if any roll number appears at least twice; otherwise,
//return false.
//Example 1
//Input: rollNumbers = [1, 2, 3, 1]
//Output: true
//Explanation: Roll number 1 appears twice.

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
    vector<int> rollNumbers = {1, 2, 3, 1};

    if (containsDuplicate(rollNumbers)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
