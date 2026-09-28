#include <iostream>

using namespace std;

int main() {
    string name;
    while (name != "your name") {
        cout << "Please type your name\n";
        getline(cin, name);
    }
    cout << "Thank you\n";
}
