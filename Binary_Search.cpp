#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;
    //Until low <= high; searching started...
while(low <= high){
    mid = ( low + high )/2;
    if( arr[mid] == element){
        return mid;
    }
    if ( arr[mid] < element){
        low = mid+1;
    }
    else high = mid - 1 ;
}
//Searching Ends...
return -1;
}

int main (){
        //!Array Must Be shorted...
    int arr[] = {1,33,56,67,89,90,94,150,243,280,333,356,398,410,467,518,
                550,598,640,689,730,783,850,900,999,1000};
    int size = sizeof(arr)/sizeof(int);
    int element = 689; //any element from this array;
    int Binary = BinarySearch(arr,size,element);
    cout<<"Element found at index : "<<Binary<<"\nElement is : "<<element<<endl;
    return 0;
}