#include<iostream>
#include<vector>
using namespace std;    
int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;

    vec.push_back(4);
    vec.push_back(5);
    cout << "Size of vector after adding an element: " << vec.size() << endl;
    cout << "Capacity of vector after adding an element: " << vec.capacity() << endl;
    return 0;
}