#include <stdio.h>
struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex complex1, complex2, sum;
    complex1 = input_complex();
    complex2 = input_complex();
    sum = add_complex(complex1, complex2);
    output(complex1, complex2, sum);
    return 0;
}
Complex input_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
void output(Complex a, Complex b, Complex sum) {
    printf("You entered two complex numbers:\n");
    printf("Complex Number 1: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Complex Number 2: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);
}