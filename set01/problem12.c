#include <stdio.h>
struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    Complex result;
    n = get_n();
    Complex complexNumbers[n];
    input_n_complex(n, complexNumbers);
    result = add_n_complex(n, complexNumbers);
    output(n, complexNumbers, result);
    return 0;
}
int get_n() {
    int n;
    printf("Enter the number of complex numbers (n): ");
    scanf("%d", &n);
    return n;
}
Complex input_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n]) {
    for (int i = 0; i < n; ++i) {
        printf("Enter values for Complex Number %d:\n", i + 1);
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0.0, 0.0}; 
    for (int i = 0; i < n; ++i) {
        result = add(result, c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result) {
    printf("You entered %d complex numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Complex Number %d: %.2f + %.2fi\n", i + 1, c[i].real, c[i].imaginary);
    }
    printf("Sum of the complex numbers: %.2f + %.2fi\n", result.real, result.imaginary);
}