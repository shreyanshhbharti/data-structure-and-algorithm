#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> ans;
    vector <int> vec={1,2,3,4};
    for(int i=0;i<vec.size();i++){
        int prod=1;
        for(int j=0;j<vec.size();j++){
            if(j==i){
                continue;
            }
            prod *= vec[j];
        }
        ans.push_back(prod);
    }
    for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
}
return 0;
}