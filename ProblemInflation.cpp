#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double cost;
  int years;
  double inflation;

  cout << "Enter the cost of the Item: ";
  cin >> cost;
  cout << "Enter the number of years from now until the item is purchased: ";
  cin >> years;
  cout << "Enter the inflation rate: ";
  cin >> inflation;

  for (int i = 0; i < years; ++i) {
    cost *= 1 + (inflation * .01);
  }

  cout << "The item will cost " << cost << endl;

  return 0;
}
