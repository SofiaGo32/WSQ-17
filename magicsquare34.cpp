#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::abs;

int main (){
  int a=0;
  int b=0;
  int z=0;
  int d=0;
  int e=0;
  int f=0;
  int g=0;
  int h=0;
  int i=0;
  int j=0;
  int k=0;
  int l=0;
  int m=0;
  int r=0;
  int o=0;
  int q=0;
  int squaref[4][4];
  int square[3][3];
  int option;
  int level;
  int level3;
  int p=0;
  int s=0;
  int t=0;
  int c=0;
  int counter1=0;
  int counter3=0;
  int n=1;
  cout << "Hey! Please select which of the options you prefer to play" << endl;
  cout << "Introduce 1: " << "Magic square 3 x 3" << endl;
  cout << "Introduce 2: " << "Magic square 4 x 4" << endl;
  cin >> option;
  if (option == 1){
    cout << "Select the level" << endl ;
    cout << "Introduce 1: " << "easy" << endl;
    cout << "Introduce 2: " << "medium" << endl;
    cout << "Introduce 3: " << "hard" << endl;
    cout << "Introduce 4: " << "master" << endl;
    cin >> level3;
    }
    if (level3==1){
      square [0][0] =4;
      square [0][1] =0;
      square [0][2] =0;
      square [1][0] =0;
      square [1][1] =5;
      square [1][2] =0;
      square [2][0] =0;
      square [2][1] =0;
      square [2][2] =6;

      cout << square[0][0] << "|" << square[0][1] << " |" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << " |" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << " |" << square[2][2] << endl;

      cout << "Introduce numbers where is a 0" << endl;
      while (p<3){
        if (square[0][p]==0){
          cin >> square[0][p] ;
        }
        p++;
      }
      while (s<3){
        if (square[1][s]==0){
          cin >> square[1][s] ;
        }
        s++;
      }
      while (t<3){
        if (square[2][t]==0){
          cin >> square[2][t] ;
        }
        t++;
      }

      cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;

    }
    if (level3==2){
      square [0][0] =0;
      square [0][1] =3;
      square [0][2] =0;
      square [1][0] =1;
      square [1][1] =0;
      square [1][2] =0;
      square [2][0] =0;
      square [2][1] =0;
      square [2][2] =0;

      cout << square[0][0] << "|" << square[0][1] << " |" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << " |" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << " |" << square[2][2] << endl;

      cout << "Introduce numbers where is a 0" << endl;

      while (p<3){
        if (square[0][p]==0){
          cin >> square[0][p] ;
        }
        p++;
      }
      while (s<3){
        if (square[1][s]==0){
          cin >> square[1][s] ;
        }
        s++;
      }
      while (t<3){
        if (square[2][t]==0){
          cin >> square[2][t] ;
        }
        t++;
      }

      cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;

    } if (level3==3){
      square [0][0] =0;
      square [0][1] =0;
      square [0][2] =0;
      square [1][0] =0;
      square [1][1] =0;
      square [1][2] =1;
      square [2][0] =0;
      square [2][1] =0;
      square [2][2] =0;

      cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;

      cout << "Introduce numbers where is a 0" << endl;

      while (p<3){
        if (square[0][p]==0){
          cin >> square[0][p] ;
        }
        p++;
      }
      while (s<3){
        if (square[1][s]==0){
          cin >> square[1][s] ;
        }
        s++;
      }
      while (t<3){
        if (square[2][t]==0){
          cin >> square[2][t] ;
        }
        t++;
      }

      cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
      cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
      cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;

    }
    if (level3==4){
     square [0][0] =0;
     square [0][1] =0;
     square [0][2] =0;
     square [1][0] =0;
     square [1][1] =0;
     square [1][2] =0;
     square [2][0] =0;
     square [2][1] =0;
     square [2][2] =0;

     cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
     cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
     cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;

     cout << "Introduce numbers where is a 0" << endl;

     while (p<3){
       cin >> square[0][p] ;
       p++;
     }
     while (s<3){
       cin >> square[1][s] ;
       s++;
     }
     while (t<3){
       cin >> square[2][t] ;
       t++;
     }

     cout << square[0][0] << "|" << square[0][1] << "|" << square[0][2] << endl;
     cout << square[1][0] << "|" << square[1][1] << "|" << square[1][2] << endl;
     cout << square[2][0] << "|" << square[2][1] << "|" << square[2][2] << endl;
   }
  if (option == 2){
    cout << "Select the level" << endl ;
    cout << "Introduce 1: " << "easy" << endl;
    cout << "Introduce 2: " << "medium" << endl;
    cout << "Introduce 3: " << "hard" << endl;
    cout << "Introduce 4: " << "master" << endl;
    cin >> level;

    cout << "Fill in the blanks (zeros), in order left to right,top to bottom" << endl;
    }
    if (level==1){
      squaref [0][0] =0;
      squaref [0][1] =2;
      squaref [0][2] =3;
      squaref [0][3] =0;
      squaref [1][0] =0;
      squaref [1][1] =0;
      squaref [1][2] =10;
      squaref [1][3] =8;
      squaref [2][0] =9;
      squaref [2][1] =7;
      squaref [2][2] =0;
      squaref [2][3] =12;
      squaref [3][0] =0;
      squaref [3][1] =14;
      squaref [3][2] =15;
      squaref [3][3] =0;
      cout << squaref[0][0] << "|" << squaref[0][1] << " |" << squaref[0][2] << " |" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << " |" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << " |" << squaref[2][2] << " |" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

      while (p<4){
        if (squaref[0][p]==0){
          cin >> squaref[0][p] ;
        }
        p++;
      }
      while (s<4){
        if (squaref[1][s]==0){
          cin >> squaref[1][s] ;
        }
        s++;
      }
      while (t<4){
        if (squaref[2][t]==0){
          cin >> squaref[2][t] ;
        }
        t++;
      }
      while (c<4){
        if (squaref[3][c]==0){
          cin >> squaref[3][c] ;
        }
        c++;
      }
      cout << squaref[0][0] << "|" << squaref[0][1] << "|" << squaref[0][2] << "|" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << "|" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << "|" << squaref[2][2] << "|" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

    } if (level==2){
      squaref [0][0] =0;
      squaref [0][1] =2;
      squaref [0][2] =3;
      squaref [0][3] =0;
      squaref [1][0] =5;
      squaref [1][1] =0;
      squaref [1][2] =0;
      squaref [1][3] =8;
      squaref [2][0] =0;
      squaref [2][1] =0;
      squaref [2][2] =0;
      squaref [2][3] =12;
      squaref [3][0] =0;
      squaref [3][1] =14;
      squaref [3][2] =15;
      squaref [3][3] =0;
      cout << squaref[0][0] << "|" << squaref[0][1] << " |" << squaref[0][2] << " |" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << " |" << squaref[1][2] << " |" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << " |" << squaref[2][2] << " |" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

      while (p<4){
        if (squaref[0][p]==0){
          cin >> squaref[0][p] ;
        }
        p++;
      }
      while (s<4){
        if (squaref[1][s]==0){
          cin >> squaref[1][s] ;
        }
        s++;
      }
      while (t<4){
        if (squaref[2][t]==0){
          cin >> squaref[2][t] ;
        }
        t++;
      }
      while (c<4){
        if (squaref[3][c]==0){
          cin >> squaref[3][c] ;
        }
        c++;
      }
      cout << squaref[0][0] << "|" << squaref[0][1] << "|" << squaref[0][2] << "|" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << "|" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << "|" << squaref[2][2] << "|" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

    } if (level==3){
      squaref [0][0] =16;
      squaref [0][1] =0;
      squaref [0][2] =0;
      squaref [0][3] =0;
      squaref [1][0] =0;
      squaref [1][1] =11;
      squaref [1][2] =0;
      squaref [1][3] =0;
      squaref [2][0] =0;
      squaref [2][1] =0;
      squaref [2][2] =0;
      squaref [2][3] =12;
      squaref [3][0] =0;
      squaref [3][1] =14;
      squaref [3][2] =0;
      squaref [3][3] =0;
      cout << squaref[0][0] << "|" << squaref[0][1] << " |" << squaref[0][2] << " |" << squaref[0][3] << endl;
      cout << squaref[1][0] << " |" << squaref[1][1] << "|" << squaref[1][2] << " |" << squaref[1][3] << endl;
      cout << squaref[2][0] << " |" << squaref[2][1] << " |" << squaref[2][2] << " |" << squaref[2][3] << endl;
      cout << squaref[3][0] << " |" << squaref[3][1] << "|" << squaref[3][2] << " |" << squaref[3][3] << endl;

      while (p<4){
        cin >> squaref[0][p] ;
        p++;
      }
      while (s<4){
        cin >> squaref[1][s] ;
        s++;
      }
      while (t<4){
        cin >> squaref[2][t] ;
        t++;
      }
      while (c<4){
        cin >> squaref[3][c] ;
        c++;
      }
      cout << squaref[0][0] << "|" << squaref[0][1] << "|" << squaref[0][2] << "|" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << "|" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << "|" << squaref[2][2] << "|" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

    } if (level==4){
      squaref [0][0] =0;
      squaref [0][1] =0;
      squaref [0][2] =0;
      squaref [0][3] =0;
      squaref [1][0] =0;
      squaref [1][1] =0;
      squaref [1][2] =0;
      squaref [1][3] =0;
      squaref [2][0] =0;
      squaref [2][1] =0;
      squaref [2][2] =0;
      squaref [2][3] =0;
      squaref [3][0] =0;
      squaref [3][1] =0;
      squaref [3][2] =0;
      squaref [3][3] =0;
      cout << squaref[0][0] << "|" << squaref[0][1] << "|" << squaref[0][2] << "|" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << "|" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << "|" << squaref[2][2] << "|" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;

      while (p<4){
        cin >> squaref[0][p] ;
        p++;
      }
      while (s<4){
        cin >> squaref[1][s] ;
        s++;
      }
      while (t<4){
        cin >> squaref[2][t] ;
        t++;
      }
      while (c<4){
        cin >> squaref[3][c] ;
        c++;
      }
      cout << squaref[0][0] << "|" << squaref[0][1] << "|" << squaref[0][2] << "|" << squaref[0][3] << endl;
      cout << squaref[1][0] << "|" << squaref[1][1] << "|" << squaref[1][2] << "|" << squaref[1][3] << endl;
      cout << squaref[2][0] << "|" << squaref[2][1] << "|" << squaref[2][2] << "|" << squaref[2][3] << endl;
      cout << squaref[3][0] << "|" << squaref[3][1] << "|" << squaref[3][2] << "|" << squaref[3][3] << endl;
    }
    if (option==1){
        p=0;
        s=0;
        t=0;

        while (n<9){
          while (p < 3){
            if (n==square[0][p]){
              counter3 ++;
            }
            p++;
          }
          while (s < 3){
            if (n==square[1][s]){
              counter3 ++;
            }
            s++;
          }
          while (t < 3){
            if (n==square[2][t]){
              counter3 ++;
            }
            t++;
          }

            n++;
        }
        if (counter3>1){
          cout << "You can't repeat numbers" << endl;
        }
        a = square[0][0];
        b = square[0][1];
        z = square[0][2];
        d = square[1][0];
        e = square[1][1];
        f = square[1][2];
        g = square[2][0];
        h = square[2][1];
        i = square[2][2];
        if (((a+b+z)==(d+e+f)&&((d+e+f)==(g+h+i)))){
          if (((a+d+g)==(b+e+h))&&((b+e+h)==(z+f+i))){

              cout << "Your magic square is correct!! :) " << endl;
              cout << "|" << squaref [0][0] << "|" << squaref [0][1] << "|" << squaref [0][2] << endl;
              cout << "|" << squaref [1][0] << "|" << squaref [1][1] << "|" << squaref [1][2] << endl;
              cout << "|" << squaref [2][0] << "|" << squaref [2][1] << "|" << squaref [2][2] << endl;


          }
        }else{
        cout << "This square is incorrect :( , please start again." << endl;
        }
    }
    if (option==2){
    p=0;
    s=0;
    t=0;
    c=0;
    while (n<16){
      while (p < 4){
        if (n==squaref[0][p]){
          counter1 ++;
        }
        p++;
      }
      while (s < 4){
        if (n==squaref[1][s]){
          counter1 ++;
        }
        s++;
      }
      while (t < 4){
        if (n==squaref[2][t]){
          counter1 ++;
        }
        t++;
      }
      while (c < 4){
        if (n==squaref[3][c]){
          counter1 ++;
        }
        c++;
      }
        n++;
    }
    if (counter1>1){
      cout << "You can't repeat numbers" << endl;
    }
    a = squaref[0][0];
    b = squaref[0][1];
    z = squaref[0][2];
    d = squaref[0][3];
    e = squaref[1][0];
    f = squaref[1][1];
    g = squaref[1][2];
    h = squaref[1][3];
    i = squaref[2][0];
    j = squaref[2][1];
    k = squaref[2][2];
    l = squaref[2][3];
    m = squaref[3][0];
    r = squaref[3][1];
    o = squaref[3][2];
    q = squaref[3][3];
    if (((a+b+z+d)==(e+f+g+h))&&((e+f+g+h)==(i+j+k+l))&&((i+j+k+l)==(m+r+o+q))){
      if (((a+e+i+m)==(b+f+j+r))&&((b+f+j+r)==(z+g+k+o))&&((z+g+k+o)==(d+h+l+q))){
        if ((a+f+k+q)==(d+g+j+m)){
          cout << "Your magic square is correct!! :) " << endl;
          cout << squaref [0][0] << "|" << squaref [0][1] << " |" << squaref [0][2] << " |" << squaref[0][3]<< endl;
          cout << squaref [1][0] << " |" << squaref [1][1] << "|" << squaref [1][2] << "|" << squaref[1][3]<< endl;
          cout << squaref [2][0] << " |" << squaref [2][1] << " |" << squaref [2][2] << " |" << squaref[2][3]<< endl;
          cout << squaref [3][0] << " |" << squaref [3][1] << "|" << squaref [3][2] << "|" << squaref[3][3]<< endl;
        }
      }
    }else{
    cout << "This square is incorrect :( , please start again." << endl;
    }
  }

  return 0;
}
