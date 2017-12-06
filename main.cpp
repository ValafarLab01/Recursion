/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on December 1, 2017, 11:51 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int nonRecursiveSum(int);
int recursiveSum(int);

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Nonrecursive sum of 1 - 10 is: " << nonRecursiveSum(10) << endl;
    cout << "Recursive sum of 1 - 10 is: " << recursiveSum(10) << endl;
    return 0;
}

int nonRecursiveSum(int input) {
    int sum(0);
    for (int i = 1; i <= input; i++) {
        sum += i;
    }
    return (sum);
}

int recursiveSum(int input) {
    cout << "Input is: " << input << endl;
    if (input == 1) {
        return 1;
    } else {
        return (input + recursiveSum(input - 1));
    }
}

