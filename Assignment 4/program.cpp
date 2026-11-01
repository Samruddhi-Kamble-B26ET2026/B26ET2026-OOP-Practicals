#include using namespace std;
class Complex { float real, imag;
public: Complex(float r = 0, float i = 0) { real = r; imag = i; }
void add(Complex c) {
cout << "Addition: " << real + c.real << " + " << imag + c.imag << "i\n";
}
void subtract(Complex c) {
cout << "Subtraction: " << real - c.real << " + " << imag - c.imag << "i\n";
}
void multiply(Complex c) {
cout << "Multiplication: " << real * c.real - imag * c.imag
<< " + " << real * c.imag + imag * c.real << "i\n";
}
void divide(Complex c) {
float d = c.real * c.real + c.imag * c.imag;
if (d == 0) {
cout << "Division not possible\n";
} else {
cout << "Division: "
<< (real * c.real + imag * c.imag) / d
<< " + "
<< (imag * c.real - real * c.imag) / d << "i\n";
}
}
void conjugate() {
cout << "Complex Conjugate: " << real << " - " << imag << "i\n";
}

};
int main() { float r1, i1, r2, i2;
cout << "Enter real and imaginary parts of first number: ";
cin >> r1 >> i1;
cout << "Enter real and imaginary parts of second number: ";
cin >> r2 >> i2;
Complex c1(r1, i1), c2(r2, i2);
c1.add(c2);
c1.subtract(c2);
c1.multiply(c2);
c1.divide(c2);
c1.conjugate();
return 0;

}
