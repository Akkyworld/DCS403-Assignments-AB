// Write a C++ program that calculates an employee’s total salary based on a base salary and a bonus percentage. The program should: Store the base salary as an integer value Store the bonus percentage as a constant Compute the bonus amount Calculate and display the total salary

#include <iostream>
using namespace std;
int main()
{
    int base_salary;
    const double bonus_percentage = 0.15;
    double bonus_amount, total_salary;
    cout << "Enter the base salary: ";
    cin >> base_salary;
    bonus_amount = base_salary * bonus_percentage;
    total_salary = base_salary + bonus_amount;
    cout << "The total salary is: " << total_salary << endl;
    return 0;
}