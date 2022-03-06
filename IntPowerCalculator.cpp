/**
 * This program solves exponents without using the pow() function. <br>
 * @author Mussie Samuel
 * <pre>
 * Date: 3/6/2022
 * CSC 1253 Project #2 Section #2
 * Instructor: Dr. Duncan
 * File: IntPowerCalculator.cpp
 * </pre>
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double base; 
    long expo;
    double bn = 1;
    cout << "Enter the base and integer exponent of the power -> ";
    cin >> base >> expo;
    if (base == 0) {
        if (expo <= 0) {
            cout << "0.00000" << "^" << expo << " = nan";
        } else {
            cout << "0.00000" << "^" << expo << " = 0.00000";
        }
        
    } else if (base == 1){
        cout << "1.00000" << "^" << expo << " = 1.00000";
    
    } else if (base == -1){
        if (expo % 2 == 0) {
            cout << "1.00000" << "^" << expo << " = 1.00000";
        } else {
            cout << "1.00000" << "^" << expo << " = -1.00000";
        }
        
    } else if (expo == 0) {
            cout << fixed << setprecision(5) << base << "^" << expo << " = 1.00000";
    
    } else if (expo > 0) {
        for (int i = 0; i < expo; ++i)
        bn = (bn * base);
        cout << fixed << setprecision(5) << base << "^" << expo << " = " << fixed << setprecision(5) << bn; 
   
    } else if (expo < 0) {
        for (int i = 0; i < abs(expo); ++i)
        bn = (bn * base);
        cout << fixed << setprecision(5) << base << "^" << expo << " = " << fixed << setprecision(5) << 1/bn; 
    }
}