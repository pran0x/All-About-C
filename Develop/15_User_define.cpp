#include<bits/stdc++.h>
using namespace std;

long double operator"" _kg(long double x){
    return x*1000; //2_kg -> 2*1000 = 2000 grams;
}

long double operator""_g(long double x){
    return x;
}

long double operator""_mg(long double x){
    return x/1000;
}
    //!_______________________________
    
            //!Another Example!//
    //!_______________________________

    //imaginary literal number;
    constexpr complex<double> operator ""_i(long double d){
        return complex <double>{
            0.0, static_cast <double> (d)
        };
    }
int main(){
    long double weight = 3.6_kg;
    cout<<"Weight is : "<<weight<<endl;                   //Weight is : 3600
    cout<< setprecision(8) <<(weight + 2.3_mg)<<endl;  //3600.0023
    cout<< (32.3_kg / 2.0_g) <<endl;                     // 16150
    cout<< (32.3_mg * 2.0_g) <<endl;                    //0.0646


    //!_______________________________

            //!Another Example!//
    //!_______________________________

        complex<double> z = 3.0 + 4.0_i;
        complex<double> y = 2.3 + 5.0_i;
        cout<< z + y<<endl;
        cout<< z * y <<endl;
return 0;
}