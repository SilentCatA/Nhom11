/// ham.h
bool prime_number(int);
void divisor(int);   
void prime_divisor(int);  
void prime_less_than(int);
bool sym_number(int);
int factorial(int);
void combination(int,int);
void liet_ke(int);

/// ham.cpp
#include "ham.h"
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool prime_number(int n) {
    bool prime = true;
	if (n == 2) { prime = true; }
	for (int i = 2; i < n; i++) {
		if (n % i == 0) prime = false;
	}
	return prime;
}

void divisor(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) cout << i << " ";
	}
	cout << endl;
}

void prime_divisor(int n) {
	for (int i = 2; i <= n; i++) {
		if ((n % i == 0) && prime_number(i)) cout << i << " ";

	}
	cout << endl;
}
void prime_less_than(int n) {
	for (int i = 2; i <= n; i++) {
		if (prime_number(i)) cout << i << " ";
	}
	cout << endl;
}

bool sym_number(int n){
	string number = to_string(n);
	string str1, str2;
	if (number.length() % 2 == 0) {
		str1 = number.substr(0, number.length() / 2);
		str2 = number.substr(number.length() / 2, number.length() / 2);
	    string rev(str2.rbegin(), str2.rend());
		str2 = rev;
	}
	else {
		str1 = number.substr(0, int(number.length() / 2));
		str2 = number.substr(int(number.length() /2) + 1, int(number.length()) / 2);
		string rev(str2.rbegin(), str2.rend());
		str2 = rev;
	}
	return (str1 == str2) ? true : false;
}
void liet_ke(int n) {
	for (int i = 10; i <= n; i++) {
		if (sym_number(i)) { cout << i << endl; }
	}
}


int factorial(int n)
{
	unsigned long result = 1;
	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}
	return result;
}

void combination(int n, int k)
{
	unsigned long result = factorial(n) / (factorial(k) * factorial(n - k));
	cout << result << endl;
}




/// main.cpp
#include <iostream>
#include "ham.h"
#include <string>

using namespace std;

int main()
{
    int n,k;
	//bai 1
	cout << "Bai1\nNhap n:  ";
	cin >> n;
	divisor(n);
	//bai 2
	cout << "Bai2\nNhap n:  ";
	cin >> n;
	prime_divisor(n);
	//bai 3
	cout << "Bai3\nNhap n:  ";
	cin >> n;
	prime_less_than(n);
	//bai 4
	cout << "Bai4\nNhap n:  ";
	cin >> n;
	liet_ke(n);
	//bai 5
	cout << "Bai5\nNhap n, k:  ";
	cin >> n >> k;
	combination(n, k);
	return 0;
}
