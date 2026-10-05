//For a array of size n, the total no of subarrays is n*(n+1)/2
//Time complexit = O(n^3)
#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();
    
    for (int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i= st; i<=end; i++ ){
                cout << vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }
return 0;
}