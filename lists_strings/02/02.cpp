#include <iostream>
#include <random>
#include <algorithm>
using namespace std;


// void myswap(int *a, int *b){
//   int temp;
//   temp=*a;
//   *a=*b;
//   *b=temp;
// }

int randnum(){
  mt19937 rng;
  rng.seed(random_device()());
  uniform_int_distribution<mt19937::result_type> dist100(1,100); // distribution in range [1, 6]
  return dist100(rng);
}

void revert_list(vector<int> &inlist){
  int full=inlist.size();
  int half=full/2;
  for (int i=0;i<half;i++){
    swap(inlist[i], inlist[full-i-1]); // using the swap from stl
    // myswap(&inlist[i], &inlist[full-i-1]);
  }
}

int main()
{

  vector<int> llist;
  int i;

  for (i=0; i<11; i++){
    llist.push_back(randnum());
    cout <<llist[i] << " ";
  }

  cout << endl;
  
  revert_list(llist);

  for (i=0; i<llist.size(); i++){
    cout <<llist[i] << " ";
  }

  cout << endl;

}






