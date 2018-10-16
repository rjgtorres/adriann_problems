#include <iostream>
#include <random>
using namespace std;

class guess{
private:
  int hidden;
  vector<int> saved;
  int nguesses;

public:
  int setHidden();
  bool checkguessed(int n);
  void printnguess();
  bool testguess(int n);
  void printhidden();
  guess();
};

int guess::setHidden(){
    mt19937 rng;
    rng.seed(std::random_device()());
    uniform_int_distribution<mt19937::result_type> dist10(1,10); // distribution in range [1, 6]
    return dist10(rng);
}

guess::guess(){
  this->hidden=setHidden();
  this->nguesses=0;
}

bool guess::checkguessed(int n){
  int i;
  for(i=0;i<this->saved.size();i++){
    if(n==this->saved[i]) return true;
  }
  return false;
}

void guess::printnguess(){
  cout << this->nguesses << endl;
};

void guess::printhidden(){
  cout << this->hidden << endl;
};

bool guess::testguess(int n){
  if(!checkguessed(n)) {
    this->saved.push_back(n);
    this->nguesses++;
  }
  if(n==this->hidden) return true;
  return false;
}
  

int main()
{
  guess luck;
  int check;
  bool lg=false;

  while(!lg){
    cout << "guess a number between 1 and 10" << endl;
    cin >> check;
    lg=luck.testguess(check);
  }
      
  cout << "it took " << endl;
  luck.printnguess();
  cout << "guesses to get it right" << endl;

  return 0;
}

      
    
