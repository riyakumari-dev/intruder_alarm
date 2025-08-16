#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
 int main(){
    string password = "tech123";
    string input;

    cout<<"Enter the password :";
    cin>>input;

    if(input==password) {

        cout<<"Acess Granted\n";
    }
    else {
        cout<<"Wrong Password! alarm triggered!\n";
        
     for(int i=0; i<5; i++) { //Beep 5 times
        
       Beep(750, 500); // bell sound

       Sleep(500);//500 second gap
   
    }
  }
  
  return 0;
}








