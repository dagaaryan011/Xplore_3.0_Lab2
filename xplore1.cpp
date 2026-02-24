#include <iostream>
#include <vector>
using namespace std;
 int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    // LINEAR SEARCH
    int target ;
    cin >> target; 
    for(int i = 0 ; i < nums.size() ; i++){
     if(nums[i] == target){
        cout << i;
     }
    }

 }