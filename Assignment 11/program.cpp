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
    cout << "Function Template:" << endl;
    cout << "Addition: " << add(10, 5) << endl;
    cout << "Subtraction: " << subtract(10, 5) << endl;
    cout << "Multiplication: " << multiply(10, 5) << endl;
    cout << "Division: " << divide(10, 5) << endl;
    Calculator<int> calc(10, 5);
    cout << "\nClass Template:" << endl;
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    return 0;
}
