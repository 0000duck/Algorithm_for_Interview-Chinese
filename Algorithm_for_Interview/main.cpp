#include "all.h"
//#include "test.hpp"
//#include "�����Ӻ���/�����Ӽ����ݹ飩.hpp"
//#include "��̬�滮/������Ӵ�.hpp"
//#include "utils/λ����.hpp"

#define _CRT_SECURE_NO_WARNINGS


using namespace std;


int main() {

    //solve();
    int a, b;
    while (cin >> a >> b && (a||b)) {
        cout << a + b << endl;
    }
    ifstream fin("in.txt");

    cout << endl;
    system("PAUSE");
    return 0;
}

//#include <iostream>
//#include <cstdio>
//#include <stack>
//#include <algorithm>
//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//#define MAXN 10001

//int main() {
//
//    vector<int> tmp;
//    string s;
//    getline(cin, s);
//    //while (cin >> s) {
//    int len = s.length();
//    double ans = 0;
//    if (s[0] == '-') {
//        auto pos = find(s.begin() + 1, s.end(), '-');
//        if (pos != s.end())
//            ans = stoi(string(s.begin(), pos)) - stoi(string(pos + 1, s.end()));
//    }
//    else
//    {
//        auto pos = find(s.begin(), s.end(), '-');
//        if (pos != s.end())
//            ans = stoi(string(s.begin(), pos)) - stoi(string(pos + 1, s.end()));
//    }
//    if (s[0] == '+') {
//        auto pos = find(s.begin() + 1, s.end(), '+');
//        if (pos != s.end())
//            ans = stoi(string(s.begin(), pos)) + stoi(string(pos + 1, s.end()));
//    }
//    else
//    {
//        auto pos = find(s.begin(), s.end(), '+');
//        if (pos != s.end())
//            ans = stoi(string(s.begin(), pos)) + stoi(string(pos + 1, s.end()));
//    }
//    auto pos = find(s.begin(), s.end(), '*');
//    if (pos != s.end())
//        ans = stoi(string(s.begin(), pos)) * double(stoi(string(pos + 1, s.end())));
//    pos = find(s.begin(), s.end(), '/');
//    if (pos != s.end()) {
//        auto a = stoi(string(s.begin(), pos));
//        auto b = double(stoi(string(pos + 1, s.end())));
//        if (b != 0)
//            ans = a / b;
//    }
//
//    if (ans == -0) ans = 0;
//    cout << ans;
//    cout << endl;
//    //}
//    //system("PAUSE");
//    return 0;
//}

