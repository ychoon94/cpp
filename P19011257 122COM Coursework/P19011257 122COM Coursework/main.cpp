#include <iostream>
#include <string>
using namespace std;

int oldSalary(float, float);
int bonus(float, float);
double newRate(float, float);

int oldSalary(float kpiValue, float Salary) {
	float newSalary = 0;
	float rate = 0;
	if (kpiValue <= 2.0 && kpiValue > 0) {
		rate = 2.0;
		newSalary = ((rate / 100) * Salary) + Salary;
		return newSalary;
	}
	else if (kpiValue > 2.0 && kpiValue <= 2.5) {
		rate = 3.5;
		newSalary = ((rate / 100) * Salary) + Salary;
		return newSalary;

	}
	else if (kpiValue > 2.5 && kpiValue <= 3.0) {
		rate = 4.0;
		newSalary = ((rate / 100) * Salary) + Salary;
		return newSalary;
	}
	else if (kpiValue > 3.0 && kpiValue <= 3.5) {
		rate = 5.0;
		newSalary = ((rate / 100) * Salary) + Salary;
		return newSalary;
	}
	else if (kpiValue > 3.5 && kpiValue <= 4.0) {
		rate = 10.0;
		newSalary = ((rate / 100) * Salary) + Salary;
		return newSalary;
	}





}
double newRate(float kpiValue, float Salary) {
	double rate = 0;
	if (kpiValue <= 2.0 && kpiValue > 0) {
		rate = 2.0;
		return rate;
	}
	else if (kpiValue > 2.0 && kpiValue <= 2.5) {
		rate = 3.5;
		return rate;

	}
	else if (kpiValue > 2.5 && kpiValue <= 3.0) {
		rate = 4.0;
		return rate;
	}
	else if (kpiValue > 3.0 && kpiValue <= 3.5) {
		rate = 5.0;
		return rate;
	}
	else if (kpiValue > 3.5 && kpiValue <= 4.0) {
		rate = 10.0;
		return rate;
	}



}
int bonus(float kpiValue, float Salary) {
	float newBonus = 0;
	if (kpiValue > 0 && kpiValue <= 2.0) {
		newBonus = (Salary * 1);
		return newBonus;
	}
	else if (kpiValue > 2.0 && kpiValue <= 2.5) {
		newBonus = (Salary * 1.5);
		return newBonus;
	}
	else if (kpiValue > 2.5 && kpiValue <= 3.0) {
		newBonus = (Salary * 2);
		return newBonus;
	}
	else if (kpiValue > 3.0 && kpiValue <= 3.5) {
		newBonus = (Salary * 2.5);
		return newBonus;
	}
	else if (kpiValue > 3.5 && kpiValue <= 4.0) {
		newBonus = (Salary * 3);
		return newBonus;
	}
}
int main() {
	double kpiValue;
	double Salary;
	string EmployID;
	cout << "Please Enter Employee ID" << endl;
	cin >> EmployID;
	while (1) {
		cout << "Please Enter kpiValue" << endl;
		cin >> kpiValue;
		while (cin.fail()) {
			cout << "Invalid Value\nEnter number again" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> kpiValue;

		}
		if (kpiValue > 4) {
			cout << "Invalid" << endl;
			continue;
		}
		if (kpiValue > 0) {
			break;

		}

		else {
			cout << "Input should be bigger than 0, Please try again." << endl;
			continue;



		}
	}
	while (1) {
		cout << "Please Enter Salary" << endl;
		cin >> Salary;
		while (cin.fail()) {
			cout << "Invalid Value\nEnter number again" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> Salary;

		}
		if (Salary > 0) {
			break;

		}
		else {
			cout << "Input should be bigger than 0, Please try again." << endl;
			continue;



		}

	}

	cout << "Employee ID:" << EmployID << endl;
	cout << "Current Salary: RM" << Salary << endl;
	cout << "KPI value:" << kpiValue << endl;
	cout << "Raised Percentage:" << newRate(kpiValue, Salary) << "%" << endl;
	cout << "Revised Salary: RM" << oldSalary(kpiValue, Salary) << endl;
	cout << "Total bonus payout: RM" << bonus(kpiValue, Salary) << endl;
	cout << "Total pay received: RM" << (Salary + bonus(kpiValue, Salary)) << endl;
	system("pause");
	return 0;

}