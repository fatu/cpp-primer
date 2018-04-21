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
  string s1;
  string s2 = s1;
  string s3 = "hiya";
  string s4(10, 'c'); // direct init
  string s5("hiya");

  string s8 = string(10, 'c'); //copy init

  string s;
//  cin >> s1 >> s2;
//  cout << s1 << s2 << endl;

//  string word;
//  while (cin >> word) {
//    cout << word << endl;
//  }

  string line;
  while (getline(cin, line))
    cout << line << endl;

  return 0;
}