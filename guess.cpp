#include <iostream>
using namespace std;

int main(){
    int guess = 5;

    cout << "Guess what number i'm thinking of between 1 - 10: ";
    cin >> guess;
    while (guess != 5)
    {
        cout << "Wrong, try again: ";
        cin >> guess;
    }
    
    cout << "Congratulations, you got it right!\n";
    return 0;
}