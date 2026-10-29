//Question 2: Find the Best Pair of Students
//Input: scores = [2, 7, 11, 15]; target = 9 Output: [0, 1]
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int scores[] = {3, 2, 4};
    int n = 3;
    int target = 6;
 
for(int i = 0;i < n; i++){
    for(int j = i + 1;j<n;i++){
       if(scores[i] + scores[j] == target){
         cout<< "[" << i << " , " << j << "]";
         return 0 ;

        }
    }
}
cout << "no pair found";
return 0;
}
