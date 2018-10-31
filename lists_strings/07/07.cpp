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


int forsum(vector<int> inlist){
  int outl=0;
  for (int i=0; i<inlist.size(); i++){
    outl+=inlist[i];
  }
  return outl;
}

int whilesum(vector<int> inlist){
  int outl=0;
  int i=0;
  while (i<inlist.size()) {
   outl+=inlist[i];
   i++;
  }
  return outl;
}

int recursivesum(vector<int> &inlist, int i){
  if (i>0) {
    return recursivesum(inlist, (i-1)) + inlist[i];
  } 
  return inlist[i];
}


int main()
{

  vector<int> llist;
  vector<int> llist2;
  int i;

  for (i=0; i<10; i++){
    llist.push_back(randnum());
  }

  for (i=0; i<llist.size(); i++){
    cout << llist[i] << " ";
  }
    cout << endl;
  
    cout << forsum(llist) << endl;
    cout << whilesum(llist) << endl;
    cout << recursivesum(llist,llist.size()) << endl;
}
