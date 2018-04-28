//
// Created by Tu, Fangbo on 4/27/18.
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
    string text("abcdefghijk");

    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;

    char sought = 'i';

    while (mid != end && *mid != sought) {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg)/2;
        if (*mid == sought)
            cout << "found!" << *mid;
    }
}
