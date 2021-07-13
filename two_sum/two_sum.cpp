#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};



int main()
{
  Solution test;
  vector<int> num_t = {2,3,5,7,9};
  vector<int> ret;

  ret = test.twoSum(num_t,14);
  std::cout << "i:" << ret[0] << " j:" << ret[1] << std::endl;
  return 0;
}

