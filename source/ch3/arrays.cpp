//
// Created by Tu, Fangbo on 4/27/18.
//
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main()
{
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

    // Array to initialize a vector
    int int_arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    vector<int> subVec(int_arr + 1, int_arr + 4);

    int ia[3][4];
    int arr1[10][20][30] = {0};

    ia[2][3] = arr1[0][0][0];
    int (&row)[4] = ia[1];

    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia1[rowCnt][colCnt];
    // for each row
    for (size_t i = 0; i != rowCnt; ++i) {
        // for each column within the row
        for (size_t j = 0; j != colCnt; ++j) {
            // assign the element's positional index as its vale
            ia[i][j] = i * colCnt + j;
        }
    }

    size_t cnt1 = 0;
    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }

    for (const auto &row : ia) {
        for (auto col : row) {
            cout << col << endl;
        }
    }

    cout << "ia = " << ia[0][0] << endl;

    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }

    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }

    using int_array = int[4];
    typedef int int_array[4];

    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }
}