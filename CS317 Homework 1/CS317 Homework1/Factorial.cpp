/*	Breck Bachle
	bb0032@uah.edu
	CS 317-01
	6/4/14
	Homework Assigment 1
	Factorial
	Reference: http://en.wikipedia.org/wiki/Factorial

	For any non-negative integer n, the factorial of n (denoted n!) is equal to
	the product of all positive integers less than or equal to n.
	0! is equal to 1 by the empty product rule.
*/

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

void main(){
	unsigned long long n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << n << "! = " << factorial(n);
}

unsigned long long factorial(unsigned long long n){
	return (n <= 1 ? 1 : n * factorial(n-1));
}