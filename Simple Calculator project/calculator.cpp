//Simple Calculator code written by Vipul agarwal.
#include <iostream>
using namespace std;
int main() {
    double x, y;
    char op;
    // Input for operations-
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Choose an operation: ";
    cin >> op;

    // Perform the selected op
    double ans;
    switch (op) {
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            if (y != 0) {
                ans = x / y;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." << endl;
            return 1;
    }

    // Output
    cout << "The ans is : " << ans << endl;

    return 0;
}
