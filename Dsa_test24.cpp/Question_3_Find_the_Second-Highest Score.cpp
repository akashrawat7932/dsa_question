//After a coding contest, a teacher sorts the students' scores to announce the runner-up. Some students may have the same score, so the runner-up must have a score strictly lower than the highest score. Given an integer array scores, return the second-largest distinct value. If a second distinct value does not exist, return -1.
//Example 1 Input: scores = [8, 3, 5, 8, 6] Output: 6
// Explanation: The highest distinct score is 8, and the second-highest distinct score is 6.
#include<iostream>
using namespace std;
int main(){
    int scores[] = {8,3,5,8,6};
    int n=5;
    int largest = 0 ;
    int secoundhight = 0;

    for(int i = 0;i<n;i++){
        for(int i =0; i<n; i++){
            if(scores[i] > largest)
            largest = scores[i];
        }
        for(int i = 0;i < n; i++){
            if(scores[i] > secoundhight && scores[i]< largest)
            secoundhight = scores[i];
        }
        
          cout<<secoundhight;
        
    
    return 0 ;
    }
}