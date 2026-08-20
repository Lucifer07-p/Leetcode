#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen; // Stores {number, index}
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // If the complement exists in our map, we found the pair
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Otherwise, add the current number and its index to the map
            seen[nums[i]] = i;
        }
        
        return {}; // Since a valid answer is guaranteed, this line won't be reached
    }
};