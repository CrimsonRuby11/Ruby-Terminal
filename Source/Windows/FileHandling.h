#include <fstream>
#include <bits/stdc++.h>
using namespace std;

class file {
    public:
        static void openFile() {
            cout << "Enter the name/path of the file to be opened : ";
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
                else if(input == "clearfile") {
                    cout << "Please confirm for clearing out the file {Y / N}: ";
                    char a; cin >> a;
                    if(a == 'Y' || a == 'y') {
                        f.close();
                        f.open(path, ios::trunc);
                        f.close();
                        cout << "Contents of the file specified have been removed" << endl;
                    }
                }
                else if (input == "append") {
                    f.close();
                    append();
                    f.open(path);
                }
                else {
                    cout << "Invalid Command, Please try again" << endl;
                }
            }
            
        }

        static void newfile() {
            cout << "Enter the name/path of the new file : ";
            string name; cin>>name;
            fstream a;
            a.open(name, ios::out);
            if(a) {
                cout << "File Created!" << endl;
                cout << "What do you want to do? : ";
                string inp; cin>>inp;
                if(inp == "write") {
                    cout << "Please type in your data to be recorded in the file :-" << endl << endl;
                    string line;
                    a.seekg(0, ios::beg);
                    cin.ignore();
                    do {
                        getline(cin, line);
                        a << line << endl;
                    } while(line.length() > 0);
                    cout << "Data written. Do you want to view the file? {Y / N} : ";
                    char s; cin>>s;
                    if(s == 'y' || s == 'Y') {
                        a.close();
                        a.open(name, ios::in | ios::out);
                        while(a) {
                            string out; getline(a, out);
                            cout << out << endl;
                        }
                        a.close();
                        cout << "File Closed and Exited";
                    }
                }
            }
            else {
                cout << "Error in creating the file" << endl;
            }
        }

        static void append() {
            fstream f;
            cout << "Enter the path/name of the file to be Appended : ";
            string s; cin>>s;
            f.open(s, ios::app);
            cout << "Enter data below :-" << endl;
            string data;
            cin.ignore();
            do {
                getline(cin, data);
                f << data << endl;
            } while(data.length() > 0);
            cout << endl << "The entered data have been added to the end of the document" << endl;
            f.close();
        }

        static void listcontents() {
            system("ls");
        }
};