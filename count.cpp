#include <iostream>
using namespace std;

int main(){
    int count = 1;
    char keep = 's';

    while (keep == 's' || keep == 'S')
    {
        cout << "Continue: "<<count<<endl;
        count++;

        cout << "Do you want to continue? S or N: ";
        cin >> keep;
    }
    

    return 0;
}