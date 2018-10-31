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

int maxlist(vector<int> inlist){
  int maxval=inlist[0];
  for (int i=1; i<inlist.size(); i++){
    maxval=max(inlist[i],maxval);
  }
  return maxval;
}

int main()
{

  vector<int> llist;
  int i;

  for (i=0; i<10; i++){
    llist.push_back(randnum());
  }

    
  cout << maxlist(llist) << endl;


}
