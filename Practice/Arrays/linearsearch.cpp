#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    bool found = false;
    for (int i = 0; i < 7; i++)
    {
        if(arr[i] == target){
            cout << i << endl;
            found = true;
            break;
        }
        
    }
    if(!found)
    cout << -1 << endl;
    

}