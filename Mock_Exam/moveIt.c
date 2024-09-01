#include <stdio.h>
#include <ctype.h>

int main() {
  int storage[3][3];
  int tmp;
  int row, column;
  for (int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      scanf("%d", &tmp);
      if (tmp == 0) {
        row = i;
        column = j;
      }
      storage[i][j] = tmp;
    }
  }
  
  char move;
  while (1+1==2) {
    scanf("%c", &move);
    if (toupper(move) == 'E') {break;}
    
    if (toupper(move) == 'L' && column != 3) {
      storage[row][column] = storage[row][column+1];
      column += 1;
      storage[row][column] = 0;
    } else if (toupper(move) == 'R' && column != 0) {
      storage[row][column] = storage[row][column-1];
      column -= 1;
      storage[row][column] = 0;
    } else if (toupper(move) == 'U' && row != 3) {
      storage[row][column] = storage[row+1][column];
      row += 1;
      storage[row][column] = 0;
    } else if (toupper(move) == 'D' && row != 0) {
      storage[row][column] = storage[row-1][column];
      row -= 1;
      storage[row][column] = 0;
    }
  }

  for (int i = 0; i < 3; i++) {
    printf("%d %d %d\n", storage[i][0], storage[i][1], storage[i][2]);
  }


  return 0;
}
