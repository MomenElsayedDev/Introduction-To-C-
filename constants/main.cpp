#include <iostream>
using namespace std;

int main() {

    // Constant integer
    const int maxUsers = 100;

    // Constant floating point number
    const double pi = 3.14159;

    // Constant character
    const char grade = 'A';

    // Constant string
    const string appName = "Introduction To C++";

    cout << "Max Users: " << maxUsers << endl;
    cout << "Pi Value: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "App Name: " << appName << endl;

    // ❌ This will cause an error
    // maxUsers = 200;

    return 0;
}