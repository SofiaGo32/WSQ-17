#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;

struct CoolObject{
    int chars,lines;
};

struct CoolObject countcs (string nombre) {
    fstream file;
    file.open(nombre);
    string line;
    int lineCount = 0;
    int charCount = 0;
    while(getline (file, line)){
        lineCount++;
        charCount += line.length();
    }

    struct CoolObject respuesta;
    respuesta.chars = charCount;
    respuesta.lines = lineCount;
    return respuesta;
}

int main () {
    // later, something like blah = countcs("alone.txt");
    struct CoolObject answer = countcs("alone.txt");
    cout << "there are " << answer.lines << " lines in the file" << endl;
    cout << "there are " << answer.chars << " chars in the file" << endl ;

    return 0 ;

}
