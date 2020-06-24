/*RUBY TERMINAL*/
/*This is the main source*/
#include <bits/stdc++.h>
#include "Standard.h"
#include "Math.h"
#include "FileHandling.h"
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
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    if(input == "print") {
        string str;
        getline(cin, str);
        Standard::printString(str);
    }

    else if(input == "math") {
        int a, b;
        char oper;
        cin >> a >> oper >> b;
        Standard::doMath(oper, a, b);
    }

    else if(input == "printfile") {
        Standard::printFile();
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

    //Math Header File
    else if(input == "pointsdistance") {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << Math::pointdistance(x1, y1, x2, y2);
    }

    //File Handling
    else if(input == "openfile"){
        file::openFile();
    }

    else if(input == "newfile") {
        file::newfile();
    }

    else if(input == "listc") {
        file::listcontents();
    }

    else {
        cout << "Command not found : " << input;
    }
}