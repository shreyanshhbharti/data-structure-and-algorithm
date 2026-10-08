// Optimised Space and Time Complexity
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    int n = vec.size();

    vector<int> ans(n, 1);
    int suffix = 1;

    // Store prefix products in ans
    for(int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * vec[i - 1];
    }

    // Calculate suffix products and multiply with prefix
    for(int i = n - 2; i >= 0; i--){
        suffix *= vec[i + 1];
        ans[i] *= suffix;
    }

    // Print answer
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}