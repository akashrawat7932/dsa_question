//Example 3
//Input: rollNumbers = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//Output: true
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
    vector<int> rollNumbers = {1, 1 ,1 , 3, 3, 4, 3, 2, 4, 2};

    if (containsDuplicate(rollNumbers)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
