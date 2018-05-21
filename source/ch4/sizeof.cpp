//
// Created by Tu, Fangbo on 5/20/18.
//
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include "Sales_data.h"

using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    Sales_data data, *p;
    sizeof(Sales_data);
    sizeof(data);
    sizeof p; // size of a pointer
    sizeof *p; // size of the type to which p points, i.e., sizeof(Sales_data)
    sizeof data.revenue;
    sizeof Sales_data::revenue;
    cout << sizeof(Sales_data) << endl;
    cout << sizeof data << endl;
    cout << sizeof p << endl;
    cout << sizeof *p << endl;
    cout << sizeof data.revenue << endl;
    cout << sizeof Sales_data::revenue << endl;
    return 0;
}
