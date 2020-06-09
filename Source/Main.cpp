/*RUBY TERMINAL*/
/*This is the main source*/
#include <bits/stdc++.h>
#include "Standard.h"
using namespace std;

// Public Variables
bool isOpen = true;

// Functions
void initialize();
string getUserInput();
void runCommand(string input);

// Main Function
int main() {
    system("clear");
    string input;

    initialize();
    while(isOpen) {
        input = getUserInput();
        runCommand(input);
    }

    return 0;
}

void initialize() {
    cout << "\tRUBY TERMINAL" << endl;
    cout << "Version 1.0.0 ; Early Test Build" << endl << endl;
}

string getUserInput() {
    string a;
    cout << endl << "||>> ";
    cin >> a;
    return a;
}

void runCommand(string input) {
    if(input == "print") {
        string str; cin >> str;
        Standard::printString(str);
    }

    else if(input == "math") {
        int a, b;
        char oper;
        cin >> a >> oper >> b;
        Standard::doMath(oper, a, b);
    }

    else if(input == "clear") {
        Standard::screenClear();
    }

    else if(input == "exit") {
        Standard::Exit();
    }

    else if(input == "help") {
        Standard::help();
    }

    else {
        cout << "Command not found : " << input;
    }
}