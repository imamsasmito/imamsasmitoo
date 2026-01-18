#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    ifstream f("bacaAku.txt");
    string s;

    while (getline(f, s)) {

        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}