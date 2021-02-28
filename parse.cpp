#include "parse.h"
#include <string>

namespace parse{
  //TEMP: If input string contains 'help', return 'help requested'. As of now,
  //string must start at [0] index.
  string parse_line(string line){
    if(line.substr(0, 3) == "help"){
      return "help requested";
    }
    else{
      return " ";
    }
  }

}
