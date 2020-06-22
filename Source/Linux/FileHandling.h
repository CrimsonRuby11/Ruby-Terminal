#include <fstream>
#include <bits/stdc++.h>
using namespace std;

class file {
    public:
        static void openFile() {
            cout << "Enter the name of the path of the file to be opened : ";
            string path; getline(cin, path);
        }
};