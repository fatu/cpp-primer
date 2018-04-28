//
// Created by Tu, Fangbo on 4/27/18.
//
#include <iostream>
#include <string>
#include <iterator>
using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;

string sa[10];
int ia[10];

int main()
{
    cout << *sa << endl;
    cout << *ia << endl;
    string sa2[10];
    int    ia2[10];
    cout << *sa2 << endl;
    cout << *ia2 << endl;
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    string a4[3]={"hi","bye"};

    char a3[4] = "C++";

    cout << 0xff/2 << endl;
    cout << a3 << endl;

    int *ptrs[10];

    unsigned scores[11] = {};
    unsigned grade;
//    while (cin >> grade) {
//        if (grade <= 100)
//            ++scores[grade/10];
//    }
//    for (auto i : scores)
//        cout << i << " ";
//    cout << endl;

    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &arr[10];
    for (int *b = arr; b != e; ++b)
        cout << *b << endl;

    int *beg = begin(arr);
    int *last = end(arr);
    cout << *beg << *(last-1) << endl; //end returns a pointer one past the last element in the given array

    int *p2 = arr + 100;//error
    cout << *p2;

    int *b = arr, *f = arr + sz;
    while (b < f) {
        // use *b
        ++b;
    }

    char* ca = "haha";
    cout << strlen(ca) << endl;
}