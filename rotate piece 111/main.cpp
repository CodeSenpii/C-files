#include <iostream>

using namespace std;
 //the rotate function
int rotate(int row, int col, int degree){

    switch(degree){

    case 0:  return (row * 4 + col );
    case 1:   return ( 12 + row - (col*4));
    case 2: return ( 15 - (row *4) - col);
    case 3: return ( 3 - row + (col*4));

    }// end of switch

return 0;
}
int main()
{
    string tet[1] ;// string array

  tet[0].append("----");// this is a tetromino block
  tet[0].append("-xx-"); // notice the shape
  tet[0].append("--x-");
  tet[0].append("--x-");

  cout << "Linear dispalay of a piece"<< tet[0]<< endl; // linear display of the piece

  // two dimensional 2D display of the piece
  int curPiece = 0;
  for (int x = 0; x < 4; x++){
    for(int y = 0; y < 4; y++){
            tet[curPiece][rotate(x, y, 3)] == 'x' ? cout<<'X' : cout << ' ';
    }  // 280 degree
    cout << endl;
  }// thats all you need

    return 0;
}
