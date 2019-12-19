#include <iostream>

using namespace std;
// the rotate function

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


    return 0;
}
