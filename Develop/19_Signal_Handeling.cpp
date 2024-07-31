#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

void signalHandler(int signum){
 cout<<"Interrupt Signal ("<<signum<<") recieved"<<endl;
 sleep(3);
 exit(signum);
}

int main(){
 // signal(SIGINT, signalHandler);
 // while(1){
 //  cout<<"Going to sleep."<<endl;
 //  sleep(1);
 // }
  // 
int i = 0;
signal(SIGINT,signalHandler);
while(++i){
 cout<<"Going to sleep."<<endl;
 if( i == 3){
  raise(SIGINT);
 }
 sleep(1);
}
return 0;
}