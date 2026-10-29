#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1};
    int n = 2;  // Seat numbers are 1 to 4

    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int seat : arr) {
        actualSum += seat;
    }

    int missing = totalSum - actualSum;

    cout << "Missing seat: " << missing << endl;
    return 0;
}