#include "parse.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

namespace parse{
  //TEMP: If input string contains 'help', return 'help requested'. As of now,
  //string must start at [0] index.
  string parse_line(string line){

    string help_string = "help";
    transform(line.begin(), line.end(), line.begin(), ::tolower); //Converts string to lowercase

    if(help_string.compare(line.substr(0, line.length())) == 0){
      return "help requested \n";
    }
    else{
      return "";
    }
  }

}
