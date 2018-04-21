//
// Created by Tu, Fangbo on 4/20/18.
//

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string line;
  while (getline(cin, line))
    if (!line.empty())
      cout << line << endl;

  auto len = line.size();


}

