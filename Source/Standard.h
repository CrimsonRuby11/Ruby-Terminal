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
        cout << "RUBY'S TERMINAL COMMANDS" << endl;
        cout << endl;
        cout << "help : show all commands" << endl;
        cout << "print : prints a given string" << endl;
        cout << "math : basic math operations like + ; - ; * ; / ; %" << endl;
        cout << "clear : clears the screen" << endl;
        cout << "exit : exits the program" << endl;
        cout << "TYPE THE RESPECTIVE COMMAND AND PRESS ENTER";
    }

    static void Exit() {
        exit(0);
    }
};