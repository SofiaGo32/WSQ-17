#include <iostream>
#include <cmath>
using namespace std ;

float avef (float numbers [],int size) {
  float sum = 0.0;
  int i = 0;
  do {
    sum = sum + numbers [i] ;
    i = i + 1 ;
  }
  while (i < size) ;
  sum = sum / i ;
  return sum ;
}


float medf (float numbers [], int size)  {
  int i = 0;
  float dev=0.0;
  float prom = avef(numbers,size);
  do {
    dev = pow((prom - numbers [i]),2) + dev;
    i = i + 1 ;
  } while ( i < size) ;
  dev = dev / size ;
  dev = sqrt (dev) ;
  return dev ;
}

int main (){
  const int size = 10 ;
  int i = 0 ;
  float numbers [size] ;
  float sums ;
  float med ;

  cout << "Please introdcue 10 numbers" << endl ;
  do {
  cin >> numbers [i] ;
  i = i + 1 ;
  }while ( i < size);

  sums = avef (numbers, size);

  cout << "The average is:" ;
  cout << sums << endl;



  cout << "Your numbers were: " << endl ;
  i = 0 ;
  do {
    cout << numbers [i] <<  " , " ;
    i = i + 1 ;
  }
  while (i < 10) ;
  cout << endl ;
  med = medf (numbers, size) ;

  cout << "The standard deviation is: " ;
  cout << med << endl ;
  
  return 0 ;
}
