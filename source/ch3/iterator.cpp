//
// Created by Tu, Fangbo on 4/26/18.
//
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s("some string");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s;
}
