#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::abs;
using std::string;
using std::fstream;
using std::setprecision;
using std::ostringstream;

int factorial (int number){
  int fact = number;
  int n = 1;
  if (number == 0 or number == 1){
    fact = 1;
  } else {
    do {
      fact = (fact * n);
      n ++ ;
    } while (n < number);
  }
  return fact ;
}

double calculatee (double precision){
  double e = 0;
  int n = 0;
  double previous = 9.999999 ;
  while (abs((e-previous))>precision){
    previous = e ;
    e = (1.00000000/ factorial(n) + e);
    n ++;
  }
  return e;
}

int main () {
  double decimal;
  double e;
  cout << "Please introduce the precision you want to know of e" << endl;
  cin >> decimal ;
  e = calculatee (decimal);
  cout << setprecision(17)<< e << endl;

  return 0 ;
}
