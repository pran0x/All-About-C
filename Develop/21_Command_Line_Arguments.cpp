/// @brief about int main para meters 
/// @param argc argument count and store the command line argument that are passed by the user include the name of the program;
/// @param argv an argument vector;

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
 cout<<"You have entered "<<argc<<" arguments"<<endl;
 for(int i = 0; i<argc; ++i){
  cout<<argv[i]<<endl;
 }
return 0;
}