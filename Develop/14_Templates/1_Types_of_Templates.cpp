/*    template < class T>
        T someFunction(){
            ........
        } 
*/
#include<bits/stdc++.h>
using namespace std;

template < class T > // define by value;
T Large(T n1, T n2)
    {
        return (n1>n2) ? n1 : n2;
    }

template < typename T > // define by type ;
    int compare( const T &value1, const T &value2){
        if( value1 > value2) return -1;
        if( value1 < value2) return 1;
    }

int main(){
    int i , j;
    char f, g;
    float k, l;

    cout<<"Enter the  integer numbers : "<< endl;
    cin>>i>>j;
    cout<<Large(i,j)<<endl;


    cout<<"Enter the  float numbers : "<< endl;
    cin>>k>>l;
    cout<<Large(k,l)<<endl;

    cout<<"Enter the  Character  : "<< endl;
    cin>>f>>g;
    cout<<Large(f,g)<<endl;

    //check by type;
    cout<<compare<int>(50,60)<<endl;
    cout<<compare<string>("PRANTO", "KUMAR")<<endl;
return 0;
}
