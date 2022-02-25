/**
 * This program lets the user assign coefficients in a quadratic equation, then displays the discriminant, axis of symmetry, vertex, y-intercept and roots of the equation.
 * @author Mussie Samuel
 * Date: 02/21/2022
 * CSC 1253 Project #1
 * Instructor: Dr. Duncan
 * File: quadsolv.cpp
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter a, b, and c for the function f(x) = ax^2 + bx + c -> ";
    cin >> a >> b >> c;
    cout << endl;
    if (a == 0) {
        cout << "ERROR: The coefficient of the quadratic term must be a non-zero.";
            return 0;
    } else {
        if (a == 1) {
            cout << "Quadratic Function: f(x) = x^2";
        } else if (a == -1) {
            cout << "Quadratic Function: f(x) = -x^2";
        } else {
            cout << "Quadratic Function: f(x) = " << fixed << setprecision(3) << a << "x^2";
        }

        if (b == 1) {
        	cout << " + x";
        } else if (b == -1) {
        	cout << " - x";
        } else if (b == 0) {
        	cout << "";
        } else if (b < 0) {
        	cout << " - " << fixed << setprecision(3) << abs(b) << "x";
        } else {
        	cout << " + " << fixed << setprecision(3) << b << "x";
        }

        if (c == 0) {
        	cout << endl;
        } else if (c < 0) {
        	cout << " - " << fixed << setprecision(3) << abs(c) << endl;
        } else {
        	cout << " + " << fixed << setprecision(3) << c << endl;
        }
    cout << endl;

    double discrim = pow(b,2) - 4*a*c;
    double x1, x2, imag, real;
    cout << "Discriminant: " << discrim << endl;
    cout << "Axis of Symmetry: x =  " << -b /(2*a) << endl;
    cout << "Vertex: (" << -b /(2*a) << ", " <<  (((4*a*c) - (b*b)) / (4*a)) << ")"<< endl;
    cout << "y-intercept: (0.000, " << c << ")" << endl;
    if (discrim > 0) {
        x1 = (-b + sqrt(discrim)) / (2*a);
        x2 = (-b - sqrt(discrim)) / (2*a);
        cout << "The roots of the equation f(x) = 0.000: x = {" << fixed << setprecision(3) << x1 << " , " << fixed << setprecision(3) << x2 << "}" << endl;
    } else if (discrim == 0) {
        x1 = -b/(2*a);
        cout << "The roots of the equation f(x) = 0.000: x = {" << fixed << setprecision(3) << x1 << "}" << fixed << setprecision(3)<< endl;
    } else {
        real = -b/(2*a);
        imag =sqrt(-discrim)/(2*a);
        cout << "The roots of the equation f(x) = 0.000: x = {"  << real << fixed << setprecision(3) << " + " << imag << fixed << setprecision(3) << "i , "  << real << fixed << setprecision(3) << " - " << imag << fixed << setprecision(3) << "i} " << endl;
    }
    }
}
