#include <iostream>
#include <string>

using namespace std;

 string a[4]= {"abcd",
                          "efgh",
                          "ijkl",
                          "mnop"};

string aa[4] = {"--x-",
                            "--x-",
                            "-xx-",
                            "----"};

string aaa[4] = {"----",
                            "----",
                            "----",
                            "----"};

int rotate(int row, int col, int degree){
    switch(degree){
    case 0:
        return (row * 4 + col);// 0 degs from original

    case 1:
        return (12+row - (col*4)); // 90 degs from original

    case 2:
        return (15 - (row*4) - col); // 180 degs from original

    case 3:
        return (3 - row + (col * 4)); // 270 deg from original
    }
return 0;
}

int main()
{

   for(int x = 0; x < 4; x++){
        for(int y = 0; y < 5; y++){
            cout << aa[x][y];
        }
    cout << endl;
   }
 /* this will rotate  odd angles  1 (90 degs) and 3 (270 degs)*/
    for (int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++) {
           // aa[x][y]= a[3-y][rotate(x, y, 1)%4];
            cout << aa[3-y][rotate(x, y, 1)%4];
        }
        cout << endl;
    }
/* this will rotate even angles 2 (180 degs) and 0 (0 degs) */
  for (int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++) {
                //aaa[x][y]= a[3-x][rotate(x, y, 2)%4];
            // cout << a[3-x][(rotate(x, y, 0) * 4 + x%4)+3-y];
            cout << aa[3-x][rotate(x, y, 0)%4];
        }
        cout << endl;
  }

cout << endl;

for (int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++) {
           // aa[x][y]= a[3-y][rotate(x, y, 1)%4];
            cout << aa[3-y][rotate(x, y, 3)%4];
        }
        cout << endl;
    }
/*
     for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            cout << aaa[x][y];
        }
    cout << endl;
   }*/
/*
cout << endl;
   for (int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++) {
            //a[x][y]= aa[3-y][rotate(x, y, 1)%4];
           cout << aa[3-y][rotate(x, y, 1)%4];
        }
        cout << endl;
   }*/

  /*
    cout << endl;
       for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            cout << a[x][y];
        }
    cout << endl;
   }*/
   return 0;
}
