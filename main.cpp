#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Convert temperature in Fahrenheit to Kelvin : " << endl;
  cout << "-------------------------------------" << endl;

  double gradeF;
  float gradeK;

  cout << "Introduce gradele in F: ";
  cin >> gradeF;

  gradeK = (gradeF + 459.67) * 5./9;

  cout << "Gradele K sunt: " << gradeK << endl;

  return 0;
}
//T K = (T F + 459.67) x 5⁄9
//kel = (5.0 / 9) * (frh - 32) + 273.15;