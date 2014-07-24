/*	Breck Bachle
	bb0032@uah.edu
	CS 317-01
	6/4/14
	Homework Assigment 1
	Fibonacci
	Reference: http://en.wikipedia.org/wiki/Fibonacci_numbers

	The Fibonaaci sequence is an integer sequence whereby any element of the
	sequence is equal to the sum of the previous two elements of the sequence.
*/

#include <iostream>

using namespace std;

unsigned long long fib(unsigned long long n);

void main(){
	unsigned long long n;
	cout << "Enter Fibonacci index to evaluate: ";
	cin >> n;
	cout << "F(" << n << ") = " << fib(n);
}

unsigned long long fib(unsigned long long n){
	return (n <= 1 ? n : fib(n-1) + fib(n-2));
}