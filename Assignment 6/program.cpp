
#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    Complex operator/(Complex c) {
        float d = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / d,
                       (imag * c.real - real * c.imag) / d);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(4, 3), c2(2, 1);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    cout << "Multiplication: ";
    product.display();

    cout << "Division: ";
    quotient.display();

    return 0;
}
