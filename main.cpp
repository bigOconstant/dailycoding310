#include <iostream>

using namespace std;


//Brute force approach, not bad but not optimal
int CountBitsBruteForce(int n){

 
  if(n == 0){
    return 0;
  }
  
  return n%2  + CountBitsBruteForce(n >> 1);
}

/*
Brian Kernighan's Algorithm.
Makes the observation that the number of bits equals the number of times it takes you 
to and n with n-1 until you get to zero. The number of iteration's always equals the number of bits
so it is really fast. O(logn)

 */

int briankernighan(int n){
 
  if (n == 0){
    return 0;
  }
  else{
    return 1 + briankernighan(n &(n-1));
  }

  
}

//Assuming only positive as the problem asked for 1-n;
int oneToN(int n){
  if(n <0){
    return 0;//Error
  }
  if(n == 1){
    return 1;
  }else{
    return briankernighan(n) + oneToN(n-1);
  }
}


int main(){




  cout<<oneToN(99999)<<endl;

  

  

  return 0;
}
