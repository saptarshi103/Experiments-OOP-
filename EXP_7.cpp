#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    Number operator+(const Number& other) {
        Number result(this->value + other.value);
        return result;
    }

    Number operator-(const Number& other) {
        Number result(this->value - other.value);
        return result;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(3);

    Number sum = num1 + num2;
    Number diff = num1 - num2;

    std::cout << "Sum: " << sum.getValue() << std::endl;
    std::cout << "Difference: " << diff.getValue() << std::endl;

    return 0;
}

