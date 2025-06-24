# 🔁 C++ Interactive While Loop Projects

This repository contains **three beginner-level C++ programs** that demonstrate the use of `while` loops in interactive scenarios. Each project focuses on a different type of user interaction: counting, guessing, and password validation.

---

## 📂 Included Projects

### 1. ✅ Continue Counter

A simple counter that keeps running while the user responds with "S" or "s".

**Key Features:**
- Uses a `while` loop with a character condition
- Increments and displays a count
- User-controlled loop continuation

**Code Summary:**
```cpp
int count = 1;
char keep = 's';

while (keep == 's' || keep == 'S') {
    cout << "Continue: " << count << endl;
    count++;
    cout << "Do you want to continue? S or N: ";
    cin >> keep;
}

Example Output:

Continue: 1  
Do you want to continue? S or N: s  
Continue: 2  
Do you want to continue? S or N: n

2. 🎯 Number Guessing Game

A guessing game where the user must guess the number the program is thinking of (in this case, 5).

Key Features:

    Uses a while loop to repeat input until the guess is correct

    Immediate feedback to the user

    Educational for conditionals and loop control

Code Summary:

int guess;
cout << "Guess what number I'm thinking of between 1 - 10: ";
cin >> guess;

while (guess != 5) {
    cout << "Wrong, try again: ";
    cin >> guess;
}
cout << "Congratulations, you got it right!";

Example Output:

Guess what number I'm thinking of between 1 - 10: 3  
Wrong, try again: 5  
Congratulations, you got it right!

3. 🔐 Password Check

The program asks the user to input the correct password ("1234") and only grants access if it's correct.

Key Features:

    Uses string comparison in a while loop

    Repeats until password matches

    Very basic authentication logic

Code Summary:

string password;
cout << "Enter your password: ";
cin >> password;

while (password != "1234") {
    cout << "Wrong, try again: ";
    cin >> password;
}
cout << "Access granted.";

Example Output:

Enter your password: admin  
Wrong, try again: 1234  
Access granted.

