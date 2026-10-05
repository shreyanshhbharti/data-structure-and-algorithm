//Time Complexity = O(n)
//Using unordered map
//Learn STL
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++) {

        int first = nums[i];
        int second = target - first;

        if (m.find(second) != m.end()) {
            return {m[second], i};
        }

        m[first] = i;
    }

    return {};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}