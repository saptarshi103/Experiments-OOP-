#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        double newReal = this->real + other.real;
        double newImaginary = this->imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }

    Complex operator-(const Complex& other) {
        double newReal = this->real - other.real;
        double newImaginary = this->imaginary - other.imaginary;
        return Complex(newReal, newImaginary);
    }

    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imaginary << std::endl;
    }
};

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.1);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    return 0;
}

