#include <iostream>
using namespace std;
template <class T>
T add(T a, T b) {
    return a + b;
}
template <class T>
T subtract(T a, T b) {
    return a - b;
}
template <class T>
T multiply(T a, T b) {
    return a * b;
}
template <class T>
T divide(T a, T b) {
    return a / b;
}
template <class T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    T add() {
        return a + b;
    }
    T subtract() {
        return a - b;
    }
    T multiply() {
        return a * b;
    }
    T divide() {
        return a / b;
    } 
};
int main() {
    char ch1, ch2;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;
    cout << "\nUsing Function Template:" << endl;
    cout << "ASCII value of " << ch1 << " = " << (int)ch1 << endl;
    cout << "ASCII value of " << ch2 << " = " << (int)ch2 << endl;
    cout << "Addition = " << add((int)ch1, (int)ch2) << endl;
    cout << "Subtraction = " << subtract((int)ch1, (int)ch2) << endl;
    cout << "Multiplication = " << multiply((int)ch1, (int)ch2) << endl;
    cout << "Division = " << divide((int)ch1, (int)ch2) << endl;
    Calculator<int> calc((int)ch1, (int)ch2);
    cout << "\nUsing Class Template:" << endl;
    cout << "Addition = " << calc.add() << endl;
    cout << "Subtraction = " << calc.subtract() << endl;
    cout << "Multiplication = " << calc.multiply() << endl;
    cout << "Division = " << calc.divide() << endl;
    return 0;
}
