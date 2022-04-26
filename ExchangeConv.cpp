/**
* This program calculates currency exchange rates of USD, GBP, EUR, and JPY
* @author msamue@github.com
* Date: 4/26/2022
**/

#include <iostream>

using namespace std;

int main () {
    string inputCur, outputCur;
    double inputAmount, outputAmount;
    cout << "Enter input currency type USD, GBP, EUR, or JPY -> ";
    cin >> inputCur;
    
    cout << "\nEnter amount: ";
    cin >> inputAmount;
    cout << "\nEnter output currency type USD, GBP, EUR, or JPY -> ";
    cin >> outputCur;
    cout << endl;
    
    outputAmount = inputAmount;
    if (inputCur == "USD" || inputCur == "usd"){
        if (outputCur == "USD" || outputCur == "usd") {
            cout << "$" << inputAmount << " <---> " << "$" << outputAmount;
        } else if (outputCur == "GBP" || outputCur == "gbp") {
             cout << "$" << inputAmount << " <---> " << "£" << outputAmount * 0.79;
        } else if (outputCur == "EUR" || outputCur == "eur") {
             cout << "$" << inputAmount << " <---> " << "€" << outputAmount * 0.94;
        } else if (outputCur == "JPY" || outputCur == "jpy") {
             cout << "$" << inputAmount << " <---> " << "¥" << outputAmount * 127.4;
        } else {
            cout << "Invalid inputs";
            return 0;
        }
    
    
    } else if (inputCur == "GBP" || inputCur == "gbp"){
        if (outputCur == "GBP" || outputCur == "gbp") {
            cout << "£" << inputAmount << " <---> " << "£" << outputAmount;
        } else if (outputCur == "USD" || outputCur == "usd") {
             cout << "£" << inputAmount << " <---> " << "$" << outputAmount * 1.26;
        } else if (outputCur == "EUR" || outputCur == "eur") {
             cout << "£" << inputAmount << " <---> " << "€" << outputAmount * 1.18;
        } else if (outputCur == "JPY" || outputCur == "jpy") {
             cout << "£" << inputAmount << " <---> " << "¥" << outputAmount * 160.86;
        } else {
            cout << "Invalid inputs";
            return 0;
        }
    
    
    } else if (inputCur == "EUR" || inputCur == "eur"){
        if (outputCur == "EUR" || outputCur == "eur") {
            cout << "€" << inputAmount << " <---> " << "€" << outputAmount;
        } else if (outputCur == "USD" || outputCur == "usd") {
             cout << "€" << inputAmount << " <---> " << "$" << outputAmount * 1.07;
        } else if (outputCur == "GBP" || outputCur == "gbp") {
             cout << "€" << inputAmount << " <---> " << "£" << outputAmount * 0.84;
        } else if (outputCur == "JPY" || outputCur == "jpy") {
             cout << "€" << inputAmount << " <---> " << "¥" << outputAmount * 135.83;
        } else {
            cout << "Invalid inputs";
            return 0;
        }
        
    } else if (inputCur == "JPY" || inputCur == "jpy"){
        if (outputCur == "JPY" || outputCur == "jpy") {
            cout << "¥" << inputAmount << " <---> " << "¥" << outputAmount;
        } else if (outputCur == "USD" || outputCur == "usd") {
             cout << "¥" << inputAmount << " <---> " << "$" << outputAmount * 0.0079;
        } else if (outputCur == "GBP" || outputCur == "gbp") {
             cout << "¥" << inputAmount << " <---> " << "£" << outputAmount * 0.0062;
        } else if (outputCur == "EUR" || outputCur == "EUR") {
             cout << "¥" << inputAmount << " <---> " << "€" << outputAmount * 0.0074;
        } else {
            cout << "ERROR: Invalid input";
            return 0;
        }
    } else {
        cout << "ERROR: Invalid input";
    }
    return 0;
}
    
