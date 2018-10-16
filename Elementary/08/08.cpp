#include <iostream>
#include <cmath>
using namespace std;

bool checkprime(unsigned long long n) {
  unsigned long long i;
  if (n%2==0) return false;
  for (i=3; i<sqrt(n)+1;i=i+2){
    if (n%i==0) return false;
  }
  return true;
}


int main()
{
  unsigned long long i;
  unsigned long long maxlim = ~((unsigned long long) 0);

  for (i=3;i<maxlim;i=i+2){
    if(checkprime(i)) cout << "this is a prime: " << i << endl;
  }
  // cout << "What is your name? \n";
  // cin >> name;
  // if ( name=="Alice" || name=="Bob" ) {
  //   cout << "Hello " << name << "!\n";
  // }
  return 0;
}
