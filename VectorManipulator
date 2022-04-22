/**
* This program represents vectors in dimension-coordinates format and does various
* vector calcations and comparisons.
* @author Mussie Samuel
* <pre>
* Date: 4/21/2022
* Course: CSC 1253 section 2 <br>
* Programming Project #: 4 <br>
* Instructor: Dr. Duncan <br>
* File: VectorManipulator.cpp
* </pre>
*/

#include<iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

/**
* Gives the dimension of the specified vector
* @param v a vector in dimension-coordinates format
* @return the dimension of this vector
*/
int dim(const double v[]) {
   return v[0];
}

/**
* Gives a string representation of this vector in the form
* <x1, x2,..., xn>, where x1 is the second element of the array,
* x2, the second element of the array, etc and n is the dimension
* of the vector and the first element of the array.
* @param v a dimension-coordinates array representation of a vector
* @return a string representation of the specified vector
*/
string vtos(const double v[]) {
    stringstream sout;
    sout << "<" << v[1];
    int dim = v[0];
    for (int i = 2; i < dim; i++) {
        sout << ", " << v[i];
    }
    sout << ">";
    return sout.str();
}

/**
* Computes the length of this vector
* @param v a dimension-coordinates array representation of a vector
* @return the length of the specified vector
*/
double length(const double v[]) {
   double sum = 0;
   for (int i = 1; i < v[0]; i++) {
       sum += v[i] * v[i];
   }
   return sqrt(sum);
}

/**
* Determines whether two vectors are equal; two vectors are
* equal if they have tha same dimension and their
* corresponding coordinates are equal.
* @param v1 a vector
* @param v2 a vector
* @return true if the specified vectors are equal;
* otherwise, false
*/
bool equal(const double v1[], const double v2[]) {
   int size = dim(v1);
   bool b = true;
   if (dim(v1) == dim(v2)) {
       for (int i = 1; i < size; i++) {
           if (v1[i] != v2[i]) {
               b = false;
               break;
           }
       }
   } else
       b = false;
   return b;
}

/**
*Computes the sum of the specified vectors
* @param v1 a vector
* @param v2 a vector
* @return the sum of the specified vectors if they have the same
* dimension or NULL, otherwise
*/
double* add(const double v1[], const double v2[]) {
   if (dim(v1) == dim(v2)) {
       int size = dim(v1);
       double* newv = new double[size];
       newv[0] = v1[0];
       for (int i = 1; i < size; i++) {
           newv[i] = v1[i] + v2[i];
       }
       return newv;
   } else
       return NULL;
}

/**
* Computes the difference of the specified vectors
* @param v1 a vector
* @param v2 a vector
* @return the v1-v2 if the vectors have the same
* dimension or NULL, otherwise
*/
double* sub(const double v1[], const double v2[]) {
   if (dim(v1) == dim(v2)) {
       int size = dim(v1);
       double* newv = new double[size];
       newv[0] = v1[0];
       for (int i = 1; i < size; i++) {
           newv[i] = v1[i] - v2[i];
       }
       return newv;
   } else
       return NULL;
}

/**
*Computes the dot product of two vectors
* @param v1 a vector
* @param v2 a vector
* @return the dot product of the v1 and v2 if they have the same
* dimension; otherwise, NAN
*/
double dot(const double v1[], const double v2[]) {
   if (dim(v1) == dim(v2)) {
       int size = dim(v1);
       double product = 0;
       for (int i = 1; i < size; i++) {
           product += v1[i] * v2[i];
       }
       return product;
   } else
       return NAN;
}

/**
*Computes the product of a vector and a number(scalar)
* @param v1 a vector
* @param n a number
* @return a vector whose coordinates are those of v, each
* multiplied by n; that is, <nv1, nv2, nv3,..., nvn>
*/
double* mult(const double v1[], double n) {
   int size = dim(v1);
   double* newv = new double[size];
   newv[0] = v1[0];
   for (int i = 1; i < size; i++) {
       newv[i] = v1[i] * n;
   }
   return newv;
}

int main() {
   int n;
   cout << "Enter the dimension of three vectors -> ";
   cin >> n;
   n = n + 1;

   double* v1 = new double[n];
   double* v2 = new double[n];
   double* v3 = new double[n];

   cout << "Enter the coordinates of v1 -> ";
   v1[0] = n;
   for (int i = 1; i < n; i++) {
       cin >> v1[i];
   }

   cout << "Enter the coordinates of v2 -> ";
   v2[0] = n;
   for (int i = 1; i < n; i++) {
       cin >> v2[i];
   }

   cout << "Enter the coordinates of v3 -> ";
   v3[0] = n;
   for (int i = 1; i < n; i++) {
       cin >> v3[i];
   }

   cout << "\nv1 = " << vtos(v1) << endl;
   cout << "v2 = " << vtos(v2) << endl;
   cout << "v3 = " << vtos(v3) << endl;

   cout << "\nv1 + v2 = " << vtos(add(v1, v2)) << endl;
   cout << "(v2 + v3) * v1 = " << dot(add(v2, v3), v1) << endl;
   cout << "|v2 - v3| = " << length(sub(v2, v3)) << endl;
   cout << "v1*v2 = " << dot(v1, v2) << " and |v2||v1| = " << length(v2) * length(v1) << endl;
   
   cout <<"\nEnter the dimension of three additional vectors -> ";
   int n2;
   cin >> n2;
   n2 = n2 + 1;
   
   double *v4 = new double[n2];
   double *v5 = new double[n2];
   double *v6 = new double[n2];

   cout << "Enter the coordinates of v4 -> ";
   v4[0] = n2;
   for (int i = 1; i < n2; i++) {
       cin >> v4[i];
   }

   cout << "Enter the coordinates of v5 -> ";
   v5[0] = n2;
   for (int i = 1; i < n2; i++) {
       cin >> v5[i];
   }

   cout << "Enter the coordinates of v6 -> ";
   v6[0] = n2;
   for (int i = 1; i < n2; i++) {
       cin >> v6[i];
   }

   cout << "\nv4 = " << vtos(v4) << endl;
   cout << "v5 = " << vtos(v5) << endl;
   cout << "v6 = " << vtos(v6) << endl;
   if (dot(add(v5, v6), v4) == (dot(v4, v5) + dot(v4, v6))) {
       cout << "\nv4 *( v5 + v6 ) = v4*v5 + v4*v6" << endl;
   } else {
       cout << "\nv4 *( v5 + v6 ) <> v4*v5 + v4*v6" << endl;
   }
   cout << "(v4+v5) / | v4+v5 | = " << vtos(mult((add(v4, v5)), 1/(length(add(v4, v5))))) << endl;
   cout << "v5/|v5+v6| + v6/|v5+v6| = " << vtos(add(mult(v5, 1/length(add(v5, v6))), mult(v6, 1/length(add(v5, v6))))) << endl;
   if (vtos(mult((add(v4, v5)), 1/(length(add(v4, v5))))) == vtos(add(mult(v5, 1/length(add(v5, v6))), mult(v6, 1/length(add(v5, v6)))))) {
       cout << "(v4+v5) / | v4+v5 | = v5/|v5+v6| + v6/|v5+v6";
   } else {
       cout << "(v4+v5) / | v4+v5 | <> v5/|v5+v6| + v6/|v5+v6|";
   }
}
