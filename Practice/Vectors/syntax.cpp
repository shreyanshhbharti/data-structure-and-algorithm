#include<iostream>
#include<vector> 
using namespace std;

int main(){
    vector<char> vec = {'A', 'B', 'C', 'D', 'E'};
    cout << "Size of vector: " << vec.size() << endl;
    vec.push_back('F');  //adding element at the end
    cout << "Size of vector after adding an element: " << vec.size() << endl;
    vec.pop_back();  //removing last element
    cout << "Size of vector after removing last element: " << vec.size() << endl;
    cout << vec.front() << endl;  //first element
    cout << vec.back() << endl;   //last element    
    cout << vec.at(2) << endl;  //element at index 2    
    for(char val : vec){  //for each loop
        cout << val << endl;    
    }
    return 0;
}