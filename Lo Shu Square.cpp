#include <iostream>
using namespace std;

void LoShuMagicSquare(int arr[3][3]);

int main() {

int arr1[3][3] = {
    {1, 2, 3,},
    {4, 5, 6,},
    {7, 8, 9}
};

int arr2[3][3] = {
    {4, 9, 2,},
    {3, 5, 7,},
    {8, 1, 6}
};

int arr3[3][3] = {
    {4, 9, 2,},
    {5, 4, 1,},
    {8, 7, 6}
};

int arr4[3][3] = {
    {4, 9, 3,},
    {2, 5, 7,},
    {6, 1, 8}
};

LoShuMagicSquare (arr1);
LoShuMagicSquare (arr2);
LoShuMagicSquare (arr3);
LoShuMagicSquare (arr4);
   
    return 0;
}

void LoShuMagicSquare (int arr[][3]){
    int row1 = 0, row2 = 0, row3 = 0;
    int col1 = 0, col2 = 0, col3 = 0;
    int diag1 = 0, diag2 = 0;
    
    for (int j = 0; j<3; j++) {
        row1 = arr[0][j] + row1;
    }
    
     for (int j = 0; j<3; j++){
        row2 = arr[1][j] + row2;
      }
    
     for (int j = 0; j<3; j++) {
        row3 = arr[2][j] + row3;
      }
    
    for (int i = 0; i<3; i++) {
        col1 = arr[i][0] + col1;
    }
    
     for (int i = 0; i<3; i++){
        col2 = arr[i][1] + col2;
      }
    
     for (int i = 0; i<3; i++) {
        col3 = arr[i][2] + col3;
      }
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++){
            if (i == j) {
                diag1 = arr[i][j] + diag1;
            }
        }
    }
      for (int i = 0; i < 3; i++) {
          diag2 += arr[i][2 - i]; 
      }
     if (row1==row2 && row3==col1 && col2==col3 && diag1==diag2){
         cout << "This is a Lo Shu Magic Square" << endl;
     }
     else {
         cout <<"This is not a Lo Shu Magic Square" << endl;
     }
      
    }
