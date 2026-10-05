//Time Complexity = O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();
    int maxSum=INT_MIN;
    
    for (int st=0; st<n; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum += vec[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout << "The maximum sum is " << maxSum;

return 0;
}
