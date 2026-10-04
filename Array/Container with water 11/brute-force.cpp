//Time complexity = O(n^2)
//Because of nested loops.
#include<iostream>
#include<vector>
using namespace std;

int container(vector<int>& vec){
    int ans=0;
    for(int i=0; i<vec.size();i++){
        for(int j=i+1; j<vec.size(); j++){
            int area= ((j-i)*(min(vec[j],vec[i])));
            ans= max(ans,area);
        }
    }
    return ans;
}

int main(){
    vector<int> vec ={1,8,6,2,5,4,8,3,7};
    cout << container(vec);
return 0;
}