//
// Created by Tu, Fangbo on 5/17/18.
//
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <bitset>
using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::bitset;

int main()
{
    int i = 1024;
    int k = -i;
    bool b = true;
    bool b2 = -b;

    short short_value = 32767;
    short_value += 1;
    cout << short_value << endl;
    cout << (short_value < 60) << endl;
    cout << (cout ? "fail" : "pass") << endl;

    unsigned char bits = 0233;
    cout << (bits << 8) << endl;

    unsigned long quiz1 = 2311;
    quiz1 |= 1UL << 27;
    cout << bitset<sizeof(unsigned long)>(quiz1) << endl;
    cout << bitset<sizeof(unsigned long)>(1UL << 27);

}
