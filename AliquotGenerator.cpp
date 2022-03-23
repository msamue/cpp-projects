/**
 * This program computes the sum of all proper divisors of a proper integer, if
 * two integers are amicable, and generates aliquot sequences.
 * @author Mussie Samuel
 * <pre>
 * Date: 3/23/2022
 * CSC 1253 Project # 3 Section # 2
 * Instructor: Dr. Duncan
 * File: AliquotGenerator.cpp
 * </pre>
*/

#include <iostream>
#include <string>

using namespace std;

/**
* Computes the aliquot sum of the specified number
* @param num an integer
* @return the aliquot sum of the specified number
* if it is positive; otherwise, -1;
*/
long rSigma(long n) {
   int sum = 0;
   for (int i = 1; i < n; i++){
       if (n % i == 0)
       sum += i;
   }
   return sum;
}

/**
* Generates the string representation of a series whose terms
* are increasing and consist of proper divisors of the specified number.
* @param num an integer
* @return a string representation of the series when num is
* greater than 1, "0" when num is 1; otherwise "nan"
*/
string genRSigSeries(long n) {
   string strsum = "1";
    for (int i = 2; i < n; i++) { 
        if (n % i == 0) { 
            strsum += (" + " + to_string(i));
       }
   }
   return strsum;
}

/**
* Generates the aliquot sequence of a number and determines the
* length of the sequence.
* @param num an integer
* @param sequence the aliquot sequence of the specified number when
* num is positive; otherwise "nan".
* @param length the length of the aliquot sequence of the specified
* number when num is positive; otherwise 0
*/
void aliquot(long n, string& sequence, long& length) {
    sequence = to_string(n);
    length = 1;
    while (n > 0) {
    sequence += (", " + to_string(rSigma(n)));
    n = rSigma(n);
    length++;
    }
}



int main() {
    long number, posint1, posint2, impint;
    cout << "Enter a positive integer for its classification class -> ";
    cin >> number; 
    if (number <= 0) { 
        cout << "ERROR: The input must be a positive integer."<< endl;
    } else { 
        cout << "s(" << number << ") = " << genRSigSeries(number) << " = " << rSigma(number) << endl;
        if (rSigma(number) == number) {
            cout << "s(" << number << ") = " << number << endl;
            cout << number << " is a perfect number." <<endl;
        } else if (rSigma(number) < number) {
            cout << "s(" << number << ") < " << number << endl;
            cout << number << " is a deficient number." << endl;
        } else if (rSigma(number) > number) {
            cout << "s(" << number << ") > " << number << endl;
            cout << number << " is an abundant number." << endl;
        }
    }
    cout << endl;
    
    cout << "Enter two positive integers -> ";
    cin >> posint1 >> posint2;
    if (posint1 <= 0  || posint2 <= 0 || posint1 == posint2) {
        cout << "ERROR: The input must be distinct postive integers." << endl;
    } else {
        if (rSigma(posint1) == posint2 && rSigma(posint2) == posint1) { 
            cout << "?amicable (" << posint1 << ", " << posint2 << ") = true" << endl;
            cout << "s(" << posint1 << ") = " << genRSigSeries(posint1) << " = " << rSigma(posint1) << endl;
            cout << "s(" << posint2 << ") = " << genRSigSeries(posint2) << " = " << rSigma(posint2) << endl;
        } else {
            cout << "?amicable ("  << posint1 << ", " << posint2 << ") = false"<< endl;
            cout << "s(" << posint1 << ") = " << genRSigSeries(posint1) << " = " << rSigma(posint1) << endl;
            cout << "s(" << posint2 << ") = " << genRSigSeries(posint2) << " = " << rSigma(posint2) << endl;
        }
    }
    cout << endl;
    
    cout << "Enter an imperfect positive integer -> ";
    cin >> impint;
    if (impint <= 0 || rSigma(impint) == impint) {
        cout << "ERROR: The input must be an imperfect positive integer.";
    } else {
        long n = impint;
        long length;
        string sequence;
        aliquot(n, sequence, length);
        cout << "aliquot{" << impint << "} = " << sequence << endl;
        cout << "length: " << length << endl;
        return 0;
    }
}
