 #include<iostream>
 using namespace std;
 
 int largest(int arr[]){
    int largest;
    largest = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i]>largest)     
        {
            largest=arr[i];
        }
        
    }
    return largest;
}

int smallest(int arr[]){
    int smallest;
    smallest=arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i]<smallest)     
        {
            smallest=arr[i];
        }
        
    }
    return smallest;
    
    
}

 int main(){
    int arr[6];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    
    cout << largest(arr) << endl;
    cout << smallest(arr) << endl;
    return 0;
 }