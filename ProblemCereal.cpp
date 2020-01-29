#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const double METRIC_TON = 35273.92; //Ounces in a metric ton
  double ounceWeight;
  double tonWeight;
  double boxNum;

  cout << "Enter the weight of the cereal in ounces: ";
  cin >> ounceWeight;
  tonWeight = ounceWeight / METRIC_TON; //converting ounces to tons
  boxNum = 1 / tonWeight; //Calculating amount of boxes to make a ton

  cout << "Weight in tons: " << tonWeight << endl;
  cout << "You need " << boxNum << " boxes to equal 1 ton" << endl;

  return 0;
}
