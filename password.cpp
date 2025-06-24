#include <iostream>
#include <string>
using namespace std;

int main(){
    string password = "1234";

    cout << "Enter your password: ";
    cin >> password;

    while(password != "1234"){
        cout << "Wrong, try again: ";
        cin >> password;
    }

    cout << "Access granted.\n";

    return 0;
}