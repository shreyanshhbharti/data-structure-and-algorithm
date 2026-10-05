//Time Complexity = O(n^2)
#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int>& vec,int x){
    int first,second,sum;
    for(int i = 0; i< vec.size(); i++){
        first=vec[i];
        for(int j=i+1;j<vec.size();j++){
            second=vec[j];
            sum=first+second;
            if(sum==x){
                cout<< i << " " << j;
                return true;
            }
        }
    }return false;
}

int main(){
    vector <int> vec = {5,2,11,7,15};
    int x=9;
    if(!twoSum(vec, x)){
        cout<< "No Pair Found";
    }
return 0;
}