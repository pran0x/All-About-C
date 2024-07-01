#include<iostream>

using namespace std;

int main(){
    //Insert an array->
int arr[5]; // Here array is an integer and it's size is 5;
cout<<"Enter the array Elements :  "<<endl;
for( int i= 0; i< 5; i++){
    cin>>arr[i];
}
int element;
cout<<"Enter the Element you want  :  ";
cin>>element;
for (int i = 0; i < 5; i++){
    if( arr[i] == element){
        cout<<"Element Found at Index : "<<i<<"\nThe element is : "<<arr[i]<<endl;
        break;
    }
    else cout<<"Linear Searching..."<<endl;
}
}