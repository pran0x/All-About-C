#include<bits/stdc++.h>
using namespace std;
class deletion{
    private:
        double re_,im_;
    public:
        deletion(double re = 0, double im = 0): re_(re), im_(im){
            cout<<"re_ value if : "<<re_<<endl;
            cout<<"im_ value if : "<<im<<endl;
        }
        ~deletion(){
            cout<<"~Deletion : "<<re_<<endl;
            cout<<"~Deletion : "<<im_<<endl;
        }
        double normal(){
            return sqrt(re_*re_ + im_*im_);
        }
        void print(){
            cout<<"Print : "<<re_<<endl;
            cout<<"Print : "<<im_<<endl;
        }
};
int main(){
    unsigned char buff[ sizeof(int) *2]; // define 8 bits of space/blocks;
    int *pint = new(buff) int(3);//define 3 as first block;
    int *qint =  new(buff + sizeof(int))int(5); //after space of 4 blocks/int size space then 5 define; 

    int *pbuf = (int*)(buff+0);// pointing the value of fist block;
    int *qbuf = (int*)(buff + sizeof(int));//pointing the value of 4 block;

    cout<<"P Buff Address : "<<pbuf<<endl;
    cout<<"P Integer Addresses : "<<pint<<endl;

    cout<<"q buff address : "<<qbuf<<endl;
    cout<<"q Integer Addresses : "<<qint<<endl;

    cout<<"1st Integer is : "<<*pbuf<<endl;
    cout<<"2nd Integer is : "<<*qbuf<<endl;


    // !Another Example;
    int x = 10;
    cout<<"before using placement new operator : "<<x<<endl;
    cout<<"The address is : "<<&x<<endl;

    int *y = new(&x) int (100);
    cout<<endl;
    cout<<"After using placement new operator : "<<x<<endl;
    cout<<"Memory address is : "<<y<<endl;
    cout<<"X address is : "<<&x<<endl;

    //!Delete allocation;
    unsigned char buf[100];
    deletion* pc = new deletion(4.2, 5.3);
    deletion* pd = new deletion[2];
    deletion* pe = new(buf)deletion(2.6,3.9);

    pc->print();
    pd[0].print();
    pd[1].print();
    pe->print();

    delete pc;
    delete[] pd;
    pe-> ~deletion();
return 0;
}