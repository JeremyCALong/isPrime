//*********************************************************
// Program: This program takes a positive input from user
// and determines if it is a prime number
//
// Author: Jeremy C Long
// File name: main.cpp
// Date: 23 March 2019
// Sources: None
// Compiled with: Code::Blocks, Unix/Linux G++
//*********************************************************

// Preprocessor directives
#include <iostream>

using namespace std; // Required for ANSI/ISO C++ 1998 Standard

int main()
{
    // Variable to hold number for user input
    int n;
    // variable to hold divisor
    int i;
    // Boolean variable set to true
    bool isPrime = true;

    // Ask user to enter a positive integer
    cout << "Please enter a positive integer greater than 1: ";
    // Stores user input into variable n
    cin >> n;

    // while loop checks user input. If user input is less than or
    // equal to 1 then program asks user to input a positive number
    // again.
    while (n <= 1)
    {
        // Ask user to enter a positive integer
        cout << "Please enter a positive integer greater than 1: ";
        // Stores user input into variable n
        cin >> n;
    }

    // If user enters a positive number greater than one then for loop
    // checks if number is prime.
    for(i = 2; i <= n/2; i++)
    {
        // if the number entered by user is perfectly divisible by i then
        // isPrime is set to false. Therefor the number is not prime.
        if(n % i == 0)
        {
            // if isPrime is false
            isPrime = false;
            // break from loop
            break;
        }
    }
    // If the number is not perfectly divisible by i until the test condition
    // in the for loop(i <= n/2) is true. This means the number entered is only
    // divisible by 1 and the number itself.
    if (isPrime)
    {
        // Print result to console that number is prime
        cout << "The number entered is prime";
    }
    // else number is not prime
    else
    {
        // Print result to console number is not prime
        cout << "The number entered is not prime";
    }

    return 0;
}
