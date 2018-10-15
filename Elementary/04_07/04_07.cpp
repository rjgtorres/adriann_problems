#include <iostream>
using namespace std;

class donum{
private:
  int N;

public:
  int sum(int n, bool bb);
  int factorial(int n);
  bool checkbizzbuzz(int a);
  void multtable(int n);

  donum(int n);

};

donum::donum(int n){
  this->N=n;
}

bool donum::checkbizzbuzz(int a){
  if ( a%3==0 || a%5==0 ){
    return false;
  } else {
    return true;
  }
}

int donum::sum(int n, bool bb)
{
  int i;
  int soma=0;
  for(i=1;i<n+1;i++)
    {
      if (bb){
	if (checkbizzbuzz(i)) soma += i;
      } else {
	soma += i;
      }
    }
  return soma;
}

int donum::factorial(int n)
{
  int i;
  int mult=1;
  for(i=2;i<n+1;i++)
    {
      mult *= i;
     }
  return mult;
}

void donum::multtable(int n)
{
  int i;
  for(i=1;i<13;i++)
    {
      cout << i << "*" << n << "=" << i*n << "\n";
    }
}

int main()
{
  int num;
  cout << "Please write a positive, integer number \n";
  cin >> num;
  donum thisnum(num);
  cout << "Do you want to sum (1), sum only the bizzbuzz numbers(2), to do a factorial(3) or  print the multiplication table(4)\n";
  int action;
  cin >> action;
  if (action==1) {
    cout << thisnum.sum(num,false) << "\n";
  } else if ( action==2 ) {
    cout << thisnum.sum(num,true) << "\n";
  } else if ( action==3 ) {
    cout << thisnum.factorial(num) << "\n";
  } else if ( action==4 ) {
    thisnum.multtable(num);
  } else {
    cout << "please choose an option between 1-3 \n";
  }
  return 0;
}

      
    
