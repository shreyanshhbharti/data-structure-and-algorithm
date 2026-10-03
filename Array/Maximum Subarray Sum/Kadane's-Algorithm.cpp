//Most Optimised
//Time complexity = line O(n)

#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1, 2, 3, 4, 5};
    int n = vec.size();
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i= 0; i<n; i++){
        currSum+=vec[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout << "Maximum Subarray Sum using Kadanes Algorithm = "<< maxSum;

return 0;
}