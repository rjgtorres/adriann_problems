#include <iostream>
#include <algorithm>
using namespace std;


// void myswap(int *a, int *b){
//   int temp;
//   temp=*a;
//   *a=*b;
//   *b=temp;
// }


bool check_palim(string &inlist){
  int full=inlist.size();
  int half=full/2;
  for (int i=0;i<half;i++){
    if (inlist[i] != inlist[full-i-1]) return false;
  }
  return true;
}

int main()
{

  string llist;
  int i;

  cout << "write a word to check if it is a palimdrome" <<  endl;
  cin >> llist;

  if(check_palim(llist)){
    cout << "It is a palimdrome" << endl;
  }
  
  
}






