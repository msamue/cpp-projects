#include <iostream>
#include <string>

using namespace std;

long rSigma(long n) {
   int sum = 0;
   for (int i = 1; i < n; i++){
       if (n % i == 0)
       sum += i;
   }
   return sum;
}

string genRSigSeries(long n) {
   string strsum = "1";
    for (int i = 2; i < n; i++) { 
        if (n % i == 0) { 
            strsum += (" + " + to_string(i));
       }
   }
   return strsum;
}

void aliquot(long n, string& sequence, long& length) {
    string series = "1";
    series = to_string(n);
    while (n > 0); {
    series += ("," + rSigma(n));
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
            //genRSigSeries here
            cout << "s(" << number << ") < " << number << endl;
            cout << number << " is a deficient number." << endl;
        } else if (rSigma(number) > number) {
            //genRSigSeries here
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
    if (impint <= 0) {// || not imperfect pos integer) {
        cout << "ERROR: The input must be an imperfect positive integer.";
    } else {
        int length = 1;
        string series = "1";
        cout << "aliquot{" << impint << "} = " << aliquot(impint, series, length);
        cout << "length: ";
    }
}
