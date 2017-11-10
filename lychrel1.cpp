#include <iostream>
using namespace std ;

int myrev (int number) {
    int rev = 0;
    do {
        rev = ((rev + (number % 10)) * 10 ) ;
        number = number / 10 ;
    } while (number > 0) ;
    rev = rev / 10 ;
    return rev ;
}

int main () {
    int lower;
    int upper;
    int n = 0;
    int copy;
    int reverse;
    int palindrome = 0;
    int lychrel = 0;
    int nlychrel = 0;
    cout << "Please introduce the lower bound" << endl ;
    cin >> lower ;
    cout << "Please introduce the upper bound" << endl ;
    cin >> upper ;
    copy = lower ;
    int count = lower ;
    do {
        reverse = myrev(copy);
        if (copy == reverse){
            palindrome ++ ;
        }else
            do {
                copy = reverse + copy ;
                reverse = myrev(copy) ;
                if (reverse == copy) {
                    nlychrel ++;
                    break ;
                }
                n ++ ;
            } while ( n < 30) ;
            if (copy!=reverse){
              lychrel ++ ;
            }
        count = count + 1 ;
        copy = count ;
    } while ( copy <= upper) ;
    cout << "From " << lower << " to " << upper << " are: " << endl ;
    cout << palindrome << " palindromes" << endl;
    cout << nlychrel << " non lychrel" << endl ;
    cout << lychrel << " lychrel candidates" << endl ;

    return 0 ;
}
