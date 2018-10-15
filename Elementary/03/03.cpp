#include <iostream>
using namespace std;

int main()
{
  string name;
  cout << "What is your name? \n";
  cin >> name;
  if ( name=="Alice" || name=="Bob" ) {
    cout << "Hello " << name << "!\n";
  }
  return 0;
}
