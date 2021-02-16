#include <iostream>
#include <string>
using namespace std;

int main(){

  //original message to display
  std::cout << "Enter QUIT to exit" << endl;

  //infinite loop
  while(1){

    string response;
    string quit = "QUIT";
    std::cout << "m-shell-0.1$ ";
    getline(cin, response);

    //exits once user input equals 'QUIT'
    if(quit.compare(response) == 0){
      std::cout << "Exiting..." << endl;
      return 0;
    }

  }

}
