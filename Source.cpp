/*
* File: P8-3
* Author: Anna Keeler
* Date: 10/27/2025
*
* Description: Lab Problem 8 part two: commiting.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//prototype

int romanCharValue(char r);
int convertRomanToInt(string s);

//global variable

string input;

int main(void) {


    while (true) {
        cout << "Enter Roman number or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;


        cout << input << " = " << convertRomanToInt(input) << endl;
    }

    return 0;

}

int romanCharValue(char r) {

    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;






    return 0;

}
int convertRomanToInt(string s) {
    int total = 0;
    while (s.length() != 0) {
        if (romanCharValue(s[0]) >= romanCharValue(s[1]) || s.length() == 1) {
            total += romanCharValue(s[0]);
            s = s.substr(1);
        }
        else {
            total += romanCharValue(s[1]) - romanCharValue(s[0]);
            s = s.substr(2);
        }

    }
    return total;
}
