//
// Created by Tu, Fangbo on 4/20/18.
//

#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main() {

    string word;
    vector<string> text;

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : v)
        i *= i;
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    vector<unsigned> scores(11, 0);
    unsigned grade;
//    while (cin >> grade) {
//        if (grade <= 100)
//            ++scores[grade / 10];
//    }

//    for (auto i : scores)
//        cout << i << " ";

    vector<int> ivec;
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec.push_back(ix);

    auto pbeg = v.begin();
    // print elements up to the first negative value
    while (pbeg != v.end() && *pbeg >= 0)
        cout << *++pbeg << endl;
}
