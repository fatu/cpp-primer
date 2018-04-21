//
// Created by Tu, Fangbo on 4/18/18.
//
#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype(a = b) d = a;
  std::cout << d;
  return 0;
}
