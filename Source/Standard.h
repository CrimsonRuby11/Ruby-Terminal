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
        system("clear");
    }

    static void open() {
        //ShellExecute
    }

    static void help() {
        fstream f;
        string helpstr;
        f.open("help.txt", ios::in);
        f.seekg(0, ios::beg);
        while(f) {
            getline(f, helpstr);
            cout << helpstr << endl;
        }
        f.close();
    }

    static void Exit() {
        exit(0);
    }
};