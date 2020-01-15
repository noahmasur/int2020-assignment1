#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int maxPeople;
  int numPeople;

  cout << "Enter the maximum number of people: ";
  cin >> maxPeople;
  cout << "Enter the number of people attending the meeting: ";
  cin >> numPeople;

  if(numPeople <= maxPeople){
    cout << "Legal to hold meeting. You can have " << (maxPeople - numPeople) << " more." << endl;
  } else{
    cout << "The meeting cannot be held as planned due to fire regulations. You must exclude " << (numPeople - maxPeople) << " people to hold it." << endl;
  }
  return 0;
}
