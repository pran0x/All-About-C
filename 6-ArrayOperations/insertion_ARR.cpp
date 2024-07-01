/* 
            Array Insertion
We take an array and insert an element into those array by using traversal and linear method

 */

#include<bits/stdc++.h>
#define SIZE_MAX 100
using namespace std;
void display(int size, int arr[]){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int insertion(int arr[], int size, int capacity,int element, int index){
     if ( size >= capacity) return -1; //if capacity is  less then size it will not work or insert any elements;
    for (int i = size - 1 ; i >= index; i--){
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
 }
int main (){
    int arr[SIZE_MAX] = {20, 30 , 40 ,50};
    int size = 4;
    display(size, arr);
    int element = 60, index = 3, capacity  = 100;
    insertion(arr, size, capacity, element, index);
    size +=1;
    display(size, arr);
return 0;
}
//Time complexity -> O(n) + O(n) + O(1) = O(n) 