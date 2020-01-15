#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const double METRIC_TON = 35273.92;
  double ounceWeight;
  double tonWeight;
  double boxNum;

  cout << "Enter the weight of the cereal in ounces: ";
  cin >> ounceWeight;
  tonWeight = ounceWeight / METRIC_TON;
  boxNum = 1 / tonWeight;

  cout << "Weight in tons: " << tonWeight << endl;
  cout << "You need " << boxNum << " boxes to equal 1 ton" << endl;

  return 0;
}
