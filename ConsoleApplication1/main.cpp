#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <list>

using namespace std;

int main(int argc, char** argv){
    vector<int> ret;
    list<int> a;
    ret.push_back(1);
    // ret.pop_back();
    a.push_back(1);
    for(int i=0; i<ret.size(); i++)
        cout << ret[i] << endl;
    cout << "Hello world" << endl;
    return 0;
}