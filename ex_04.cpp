#include<iostream>
#include<iomanip>
using namespace std;

double deduction(double money, int n) {
	double result =  money - 1600000 * n;
	if (result <= 0) {
		cout << "That's illegal!";
		deduction(money, n);
	}
	return result;
}

double vat(double money, double left_restriction, double right_restriction, double rate){
	double value = 0;
	if (money > left_restriction) {
		if ((money <= right_restriction) || (right_restriction == -1)) value = (money - left_restriction) * rate;
		else value = (right_restriction - left_restriction) * rate;
	}
	return value;
}

int main() {
	double restriction[] = { 0, 4000000, 6000000, 9000000, 14000000, 24000000, 44000000, 84000000, -1 }, 
		   tax_rate[] = { 0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35 };
	double money, sum = 0;
	int people;
	cout << "Money: "; cin >> money;
	cout << "Circumstances deduction: "; cin >> people;
	money = deduction(money, people);
	for (int i = 0; i < 8; i++) {
		sum += vat(money, restriction[i], restriction[i + 1], tax_rate[i]);
	}
	cout << "Result: " << fixed << setprecision(0) << sum << endl;
	return 0;
}
