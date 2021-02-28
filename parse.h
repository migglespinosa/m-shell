#ifndef __PARSE_H_INCLUDED__
#define __PARSE_H_INCLUDED__

#include <string>

using namespace std; 

//TEMP: If input string contains 'help', return 'help requested'. As of now,
//string must start at [0] index.
namespace parse {
  string parse_line(string line);
}

#endif
