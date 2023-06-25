// Write a program to create 4 functions namely add1( ), add2( ), add3( ), add4( ) to demonstrate the concept of all types of function

#include <iostream>

using namespace std;

// Function with no return value and no parameters
void add1()
{
    int a = 10, b = 20;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}

// Function with return value and no parameters
int add2()
{
    int a = 30, b = 40;
    int sum = a + b;
    return sum;
}

// Function with no return value and parameters
void add3(int a, int b)
{
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}

// Function with return value and parameters
int add4(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    // Calling functions
    add1();
    int sum2 = add2();
    cout << "The sum is " << sum2 << endl;
    add3(50, 60);
    int sum4 = add4(70, 80);
    cout << "The sum is " << sum4 << endl;

    return 0;
}
