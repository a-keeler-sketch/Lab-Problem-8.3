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
using namespace std;
//prototype

int romanCharValue(char r);

//global variable

char input = 'X';

int main(void) {

    cout << "Roman Numeral Value Equals: " << romanCharValue(input) << endl;
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
