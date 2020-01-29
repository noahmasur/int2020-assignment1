#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const double HOUR_PAY = 16.0; //pay per hour
  const double OVER_PAY = HOUR_PAY * 1.5; //pay per hour of overtime
  const int MED_INSURANCE = 10; //amount taken away for meical insurance
  double socialTax = .06; //percent taken away from social security tax
  double fedTax = .14; //percent taken away from federeal tax
  double stateTax = .05; //percent taken away from state tax
  int hours;
  int overHours;
  int totalPay;
  int totalWitholding;
  int netPay;

  cout << "Enter the regular hours you worked this week: ";
  cin >> hours;
  cout << "Enter the overtime hours you worked this week: ";
  cin >> overHours;

  totalPay = (hours * HOUR_PAY) + (overHours * OVER_PAY); //Calculating total pay
  //caluclating taxes taken away fro total pay
  socialTax *= totalPay
  fedTax *= totalPay;
  stateTax *= totalPay;

  totalWitholding = socialTax + fedTax + stateTax + MED_INSURANCE; //total taxes taken away
  netPay = totalPay - totalWitholding; //pay after the taxes

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
