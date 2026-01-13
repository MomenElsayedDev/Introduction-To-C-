#include <iostream>
using namespace std;

int main() {

    // Integer types
    int age = 25;                // int: 4 bytes – stores whole numbers
    short smallNumber = 10;      // short: 2 bytes – smaller range integer
    long bigNumber = 100000;     // long: 8 bytes (on 64-bit) – larger whole numbers
    long long veryBigNumber = 1000000000; // long long: 8 bytes – very large integers

    // Unsigned integer (only positive values)
    unsigned int score = 95;     // unsigned int: 4 bytes – only positive integers

    // Floating point types
    float price = 19.99f;        // float: 4 bytes – single precision decimal
    double salary = 5500.75;     // double: 8 bytes – double precision decimal

    // Character type
    char letter = 'A';           // char: 1 byte – single character

    // Boolean type
    bool isOnline = true;        // bool: 1 byte – true or false

    // String type
    string name = "Moamen";      // string: variable size – text of variable length

    // Printing values
    cout << "Age: " << age << endl;
    cout << "Small Number: " << smallNumber << endl;
    cout << "Big Number: " << bigNumber << endl;
    cout << "Very Big Number: " << veryBigNumber << endl;
    cout << "Score: " << score << endl;
    cout << "Price: " << price << endl;
    cout << "Salary: " << salary << endl;
    cout << "Letter: " << letter << endl;
    cout << "Is Online: " << isOnline << endl;
    cout << "Name: " << name << endl;

    cout << "\n--- Sizes in Memory (bytes) ---" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;      // size of int in memory
    cout << "float: " << sizeof(float) << " bytes" << endl;  // size of float in memory
    cout << "double: " << sizeof(double) << " bytes" << endl;// size of double in memory
    cout << "char: " << sizeof(char) << " byte" << endl;     // size of char in memory
    cout << "bool: " << sizeof(bool) << " byte" << endl;     // size of bool in memory

    return 0;
}
