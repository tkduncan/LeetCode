#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> previousMap;

        for (int i = 0; i < nums.size(); i++) {
            if (previousMap.find(target - nums[i]) != previousMap.end()) {
                return {previousMap[nums[i]], i};
            }
            previousMap.insert({nums[i], i});
        }
        return {};
    }
};