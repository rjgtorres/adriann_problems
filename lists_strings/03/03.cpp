#include <iostream>
#include <random>
#include <algorithm>
using namespace std;


int randnum(){
  mt19937 rng;
  rng.seed(std::random_device()());
  uniform_int_distribution<mt19937::result_type> dist100(1,100); // distribution in range [1, 6]
  return dist100(rng);
}

bool isthere(int n, vector<int> inlist){
  for (int i=0; i<inlist.size(); i++){
    if(n==inlist[i]) {
      cout << n << "in in position " << i+1 << endl;
      return true;
    }
  }
  return false;
}

int main()
{

  vector<int> llist;
  int i;

  for (i=0; i<10; i++){
    llist.push_back(randnum());
  }

  int n;
  cout << "Write a number to check if it is a random list of 10 numbers" << endl;
  cin >> n;

  for (i=0; i<llist.size(); i++){
    cout << llist[i] << " ";
  }

  cout << endl;
    
  if(isthere(n, llist)) cout << "it IS!" << endl;


}
