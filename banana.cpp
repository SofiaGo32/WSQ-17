#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdio>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::abs;
using std::string;
using std::fstream;

int countwords (string name) {
  fstream file ;
  file.open (name) ;
  string line ;
  int banana = 0;
  while(getline (file, line)){
    transform(line.begin(),line.end(),line.begin(), (int (*)(int))tolower);
    int index = line.find("banana");
    while (index != -1){
      banana++;
      index = line.find("banana", index+1);
      //cout << index << endl;
    }
  }
  return banana;
}
int main (){
  string file ;
  cout << "Please introduce the name of the file" << endl ;
  cin >> file ;
  cout << countwords(file) << endl ;

  return 0 ;
}
