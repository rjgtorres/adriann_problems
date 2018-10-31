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

vector<int> oddlist(vector<int> inlist){
  vector<int> outl;
  for (int i=0; i<inlist.size(); i++){
    if((i+1)%2!=0) {
      outl.push_back(inlist[i]);
    }
  }
  return outl;
}

vector<int> rolingsum(vector<int> inlist){
  vector<int> outl;
  for (int i=0; i<inlist.size(); i++){
    if(i==0) {
      outl.push_back(inlist[i]);
    } else {
      outl.push_back(inlist[i]+outl[i-1]);
    }
  }
  return outl;
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
  
  llist2=rolingsum(llist);
  
  for (i=0; i<llist2.size(); i++){
    cout << llist2[i] << " ";
  }
    cout << endl;
}
