//Time complexity = O(n^2) 
//because of nested loop, Time limit Excceeds.

#include<iostream>
#include<vector>
using namespace std;

int containsDuplicate(vector<int>& vec){
    for(int i = 0; i<vec.size(); i++){
        for(int k=i+1; k<vec.size(); k++ ){
            if(vec[i]==vec[k]){
                return 1;
            }
        }
    }return 0;
}

int main(){
    vector <int> vec ={1,2,3,1};
    int n = containsDuplicate(vec);
    if(n){
        cout << "True";
    }else{
        cout << "false";
    }
return 0;
}