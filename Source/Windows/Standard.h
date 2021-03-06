// Standard Commands Class
#include <bits/stdc++.h>
using namespace std;

class Standard {
    public:
        // Print the entered string
        static void printString(string input) {
            cout << input;
        }

        static void doMath(char oper, double a, double b) {
            switch(oper) {
                case '+' :
                    cout << a + b;
                    break;
                case '-' :
                    cout << a - b;
                    break;
                case '*' :
                    cout << a * b;
                    break;
                case '/' :
                    cout << a / b;
                    break;
                case '^':
                    cout << pow(a, b);
                    break;
                case '%':
                    cout << (int)a % (int)b;
                default:
                    cout << "Error";
            }
        }

        static void screenClear() {
            system("cls");
        }

        static void help() {
            fstream f;
            f.open("help.rubyshell", ios::in);
            f.seekg(0, ios::beg);
            if(!f) {
                cout << "Error : File 'Help.rubyshell' not found, please place it in the directory";
            }
            while(f) {
                string helpstr;
                getline(f, helpstr);
                cout << helpstr << endl;
            }
            f.close();
        }

        static void printFile() {
            fstream f;
            string filename; cin>>filename;
            f.open(filename, ios::in);
            f.seekg(0, ios::beg);
            if(!f) {
                cout << "Error : File '" << filename << "' not found";
            }
            while(f) {
                string contents;
                getline(f, contents);
                cout << contents << endl;
            }
            f.close();
        }

        static void Exit() {
            cout << "exitcode : 0" << endl;
            exit(0);
        }
};