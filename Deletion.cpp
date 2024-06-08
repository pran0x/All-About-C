#include<bits/stdc++.h>
using namespace std;
#define Max_Size 100
//Using [Traversal] in //!display  function; -> O(n)
void display(int arr[], int size){ 
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Using deletion method in //!Deletion function;  -> O(n)
void Deletion(int arr[], int size,int dlt_idx_element){
    for(int i = dlt_idx_element; i < size; i++){
        arr[i] = arr[i+1];
    }
}
int main (){ //!-> O(1)
    int arr[Max_Size] = {20,30,40,50,60};
    int size = 5;
    display(arr,size);
    int dlt_idx_element = 2;
    Deletion(arr, size,dlt_idx_element);
    size--;
    display(arr,size);
    return 0;
}
//! Total time complexity -> O(n) + O(n) + O(1) = O(n)