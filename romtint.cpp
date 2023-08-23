#include <iostream>
#include <unordered_map>

using namespace std;

int main () {
  unordered_map<char, int>m;
  int ans = 0;
  string s = "";

  cout << "Enter Roman: ";
  cin >> s;

  m['I'] = 1;
  m['V'] = 5;
  m['X'] = 10;
  m['L'] = 50;
  m['C'] = 100;
  m['D'] = 500;
  m['M'] = 1000;

  for (int i = 0; i < s.size(); i++) {
    if(m[s[i]] < m[s[i + 1]]) {
      ans -= m[s[i]];
    } else {
      ans += m[s[i]];
    }
  }

  cout << ans;

  return 0;
}
