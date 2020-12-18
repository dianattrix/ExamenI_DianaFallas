#include "Utils.h"

void printString(string _string) {
    cout << _string;
}

void printError(string _error) {
    cerr << _error;
}

string readString() {
    string x;
    getline(cin, x);
    return x;
}

int readInteger() {
    int n;
    
    while (true) {
        if (cin >> n) {
            cin.clear();
            cin.ignore(1024, '\n');
            return n;
        } else {
            cerr << "Invalid input... please, type a number" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
    }

}

double readDouble() {
    double n;
    bool continuar = true;
    while (true) {
        if (cin >> n) {
            cin.clear();
            cin.ignore(1024, '\n');
            return n;
        } else {
            cerr << "Invalid input... please, type a number" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
    }

}

void clearScreen() {
    system("cls");
}

void waitingEnter() {
    cin.get();
}

char readChar() {
    char n;
    while (true) {
        if (cin >> n) {
            cin.clear();
            cin.ignore(1024, '\n');
            return n;
        } else {
            cerr << "Invalid input... please, type a letter" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
    }
}
