//
// Created by Tu, Fangbo on 4/20/18.
//
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s("some string");
  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
    s[index] = toupper(s[index]);
  const string hexdigits = "0123456789ABCDEF";
  cout << "Enter a series of numbers between 0 and 15"
       << " separated by spaces. Hit ENTER when finished: "
       << endl;
  string result;
  string::size_type n;
  while (cin >> n)
    if (n < hexdigits.size())
      result += hexdigits[n];
  cout << "Your hex number is: " << result << endl;
}