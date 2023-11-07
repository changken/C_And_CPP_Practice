# include "stl_practice.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <list>
#include <time.h>
#include <stack>
#include <queue>
//#include <priority_queue>
//#include <pair>

using namespace std;

int stl_pratice(int argc, char *argv[]) {
    srand(time(NULL));

    //ordered set
    set<int> Set;
    unordered_set<int> oSet;

    map<char, int> map;
    unordered_map<char, int> oMap;

    string s;
    cout << "Enter a text: ";
    cin >> s;

    /*for (char ch : s) {
        if (map.find(ch) == map.end()) {
            map[ch] = 0;
        }
        map[ch]++;
    }*/

    /*for (const auto& e : map) {
        cout << e.first << " " << e.second << endl;
    }*/

    /*for (auto it = map.begin(); it != map.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }*/

    /*for (char ch : s) {
        if (oMap.find(ch) == oMap.end()) {
            oMap[ch] = 0;
        }
        oMap[ch]++;
    }

    for (const auto& e : oMap) {
        cout << e.first << " " << e.second << endl;
    }

    for (auto it = oMap.begin(); it != oMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }*/

    // stack and queue
    stack<int> st;
    queue<int> que;
    int n = 0;
    try {
        while (n != -999) {
            cout << "Enter a number: ";
            cin >> n;

            if (n == -999) {
                break;
            }
            que.push(n);
            st.push(n);
        }
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "Queue" << endl;

    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;

    cout << "Stack" << endl;

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;




    /*
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int max = 10, min = 1;

    while (1) {
        int r = rand() % (max - min + 1) + min;
        oset.insert(r);
        if (oset.size() == 10) {
            break;
        }
    }

    for (int e : oset) {
        cout << e << " ";
    }
    cout << endl;*/


    /*list<int> lst;
    int n;
    printf("Input a number: ");
    try {
        scanf_s("%d", &n);
    }
    catch (const exception &e) {
        cout << e.what() << endl;
    }
    for (int i = 0; i < n; i++) {
        lst.push_back(i);
    }
    vector<int> vec;

    printf("Input a number: ");
    try {
        scanf_s("%d", &n);
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    for (int i = 0; i < n; i++) {
        vec.push_back(i);
    }

    for (int e : vec) {
        cout << e << " ";
    }
    cout << endl;

    for (int e : lst) {
        cout << e << " ";
    }
    cout << endl;*/

    return 0;
}