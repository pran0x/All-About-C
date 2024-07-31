#include <bits/stdc++.h>
using namespace std;
// Copy and  Swap idiom;
// Copy Data from a source and paste it to it's Destination;
class X
{
    int size;
    int *ptr;

public:
    X(int s = 0) : size(s),
    ptr(size ? new int[size] : nullptr){}

    X(const X& obj) : size(obj.size),
    ptr(size? new int [size] : nullptr){
            // where , where from, how much
        memmove(ptr, obj.ptr, size * sizeof(int));
    }
    friend void swap(X& obj1 , X& obj2){
        std:: swap(obj1.size,obj2.size);
        std:: swap(obj1.ptr,obj2.ptr);
    }
    // X& operator = (const X&obj)
    X& operator = (X obj)
    {
        // if (this != &obj)
        // {
        //     delete ptr;
        //     size = obj.size;
        //     ptr = size ? new int[size] : nullptr;
        //     memmove(ptr, obj.ptr, size * sizeof(int));
        //     return *this;
        // }
        //Call Friend Function;
        swap(*this,obj);
        return *this;
    }
};
int main()
{

    return 0;
}