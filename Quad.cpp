//Program to solve a Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double root, root1, root2, a, b, c;
    cout<<"Enter the coefficients a, b, c: ";
    cin >> a >> b >> c;
    root = sqrt(b * b - 4.0 * a * c);
    root1 = 0.5 * (root - b) / a;
    root2 = -0.5 * (root + b) / a;
    cout<<"The solutions are "<< root1 <<" and "<< root2 << "\n";
    return(0);

}