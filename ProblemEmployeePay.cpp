#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const double HOUR_PAY = 16.0;
  const double OVER_PAY = HOUR_PAY * 1.5;
  const int MED_INSURANCE = 10;
  double socialTax = .06;
  double fedTax = .14;
  double stateTax = .05;
  int hours;
  int overHours;
  int totalPay;
  int totalWitholding;
  int netPay;

  cout << "Enter the regular hours you worked this week: ";
  cin >> hours;
  cout << "Enter the overtime hours you worked this week: ";
  cin >> overHours;

  totalPay = (hours * HOUR_PAY) + (overHours * OVER_PAY);
  socialTax *= totalPay;
  fedTax *= totalPay;
  stateTax *= totalPay;
  totalWitholding = socialTax + fedTax + stateTax + MED_INSURANCE;
  netPay = totalPay - totalWitholding;

  cout << endl;
  cout << "Gross income: " << totalPay << endl;
  cout << "Social Security tax: " << socialTax << endl;
  cout << "Federal income tax: " << fedTax << endl;
  cout << "State income tax: " << stateTax << endl;
  cout << "Medical insurance: " << MED_INSURANCE << endl;
  cout << "Total totalWitholding: " << totalWitholding << endl;
  cout << "Net Pay: " << netPay << endl;

  return 0;
}
