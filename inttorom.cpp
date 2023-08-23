#include <iostream>

using namespace std;

int main () {
  int num;

  cout << "Enter a Integer: ";
  cin >> num;

  string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  string thousands[] = {"", "M", "MM", "MMM"};

  string roman = thousands[num/1000] + hundreds[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];

  cout << roman;

  return 0;
}
