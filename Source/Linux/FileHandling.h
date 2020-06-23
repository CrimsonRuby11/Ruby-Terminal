#include <fstream>
#include <bits/stdc++.h>
using namespace std;

class file {
    public:
        static void openFile() {
            cout << "Enter the name of the path of the file to be opened : ";
            string path; cin>>path;
            fstream f;
            f.open(path, ios::in | ios::out);
            f.seekg(0, ios::beg);
            if(!f) {
                cout << "File could not be opened" << endl;
                f.close();
            }
            while(f.is_open()) {
                string input;
                cout << "What do you want to do?" << endl;
                cin >> input;
                if(input == "printfile") {
                    while(f) {
                        string output;
                        getline(f, output);
                        cout << output << endl;
                    }
                    f.close();
                    f.open(path, ios::in | ios::out);
                    f.seekg(0, ios::beg);
                }
                else if(input == "exit") {
                    cout << "File closed and exited" << endl;
                    f.close();
                }
            }
            
        }
};