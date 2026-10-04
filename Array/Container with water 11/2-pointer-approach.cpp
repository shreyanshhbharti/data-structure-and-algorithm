//Two pointer Approach is used when we need to track 2 values simultaneously.
//Time Complexity =  O(n)
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int lp = 0;
    int rp = height.size() - 1;
    int ans = 0;

    while (lp < rp) {
        int area = (rp - lp) * min(height[lp], height[rp]);

        ans = max(ans, area);

        if (height[lp] < height[rp]) {
            lp++;
        }
        else {
            rp--;
        }
    }

    return ans;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxArea(height);

    return 0;
}