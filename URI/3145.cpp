#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << fixed << setprecision(2) << (b) / (a + 2.00) << endl;
}