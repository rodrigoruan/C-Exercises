#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;

  int in = 0;
  int out = 0;

  for(int i = 0; i < a; i++) {
    int x;
    cin >> x;
    if(x >= 10 && x <= 20) {
      in++;
    } else {
      out++;
    }
  }

  cout << in << " in" << endl;
  cout << out << " out" << endl;
}