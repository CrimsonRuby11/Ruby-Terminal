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

        static void newfile() {
            cout << "Enter the name of the new file : ";
            string name; cin>>name;
            fstream a;
            a.open(name, ios::out);
            if(a) {
                cout << "File Created!" << endl;
                cout << "What do you want to do? : ";
                string inp; cin>>inp;
                if(inp == "write") {
                    cout << "Please type in your data to be recorded in the file :-" << endl << endl;
                    string data;
                    cin.ignore();
                    getline(cin, data);
                    a.seekg(0, ios::beg);
                    a << data;
                    cout << "Data written. Do you want to view the file? {Y / N} : ";
                    char s; cin>>s;
                    if(s == 'y' || s == 'Y') {
                        a.close();
                        a.open(name, ios::in | ios::out);
                        while(a) {
                            string out; getline(a, out);
                            cout << out;
                        }
                        a.close();
                        cout << endl << endl << "File Closed and Exited";
                    }
                }
            }
            else {
                cout << "Error in creating the file" << endl;
            }
        }

        static void listcontents() {
            system("ls");
        }
};