//
// Created by diana on 17/12/2020.
//

#include"Stack.h"

int main() {

    cout << "Ingrese el tamano";
    int t;
    cin >> t;

    Stack<string> stack(t);

    try {
        stack.push("s");
        stack.push("s");
        stack.push("s");
    }
    catch(char const* message){
        cout << message;
    }
    return 0;
}
