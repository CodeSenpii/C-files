#include <iostream>

using namespace std;

int rotate(int row, int col, int degree){

    switch(degree){

    case 0:  return (row * 4 + col ); // 0 deg
    case 1:   return ( 12 + row - (col*4));// 90 deg
    case 2: return ( 15 - (row *4) - col);// 180 deg
    case 3: return ( 3 - row + (col*4)); // 270 deg

    }// end of switch

return 0;
}
int main()
{
string tet[1] ;

  tet[0].append("----");
  tet[0].append("-xx-");
  tet[0].append("--x-");
  tet[0].append("--x-");

  cout << tet[0]<< endl; // linear string

  //  rotation counter clockwise
int curPiece = 0;
  for (int x = 0; x < 4; x++){
    for(int y = 0; y < 4; y++){
            tet[curPiece][rotate(x, y, 0)] == 'x' ? cout<<'X' : cout << ' ';

    }
    cout << endl;
  }// thats all you need

    return 0;
}
