#include <iostream>
#include <cstdio>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::abs;

float root_with_guess(float number, float guess){
  float sroot ;
  do {
    sroot = guess;
    guess = 0.5*(guess + number/guess);
  } while (abs(sroot-guess) > 0.0001);
  return guess;
}

int main (){
  cout << "Please introdcue a number" << endl ;
  float number ;
  cin >> number;
  cout << "Please introduce a inicial guess" << endl ;
  float guess ;
  cin >> guess ;
  if (number >= 0){
    float res ;
    res = root_with_guess(number, guess) ;
    cout << "The square root of " << number << " is " << res << endl ;

  } else
  cout << "The result is imaginary, please introduce an other number" << endl ;

  return 0;
}
