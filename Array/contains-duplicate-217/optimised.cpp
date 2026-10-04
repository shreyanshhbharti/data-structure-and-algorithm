//Using Sets time complexity reduces to O(n log n)
//Set is a special container that stores only unique values.
//set<int> s;

#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> s;

    for(int x : nums) {
        if(s.count(x)) {
            return true;
        }

        s.insert(x);
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    if(containsDuplicate(nums)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}