#include <iostream>
using namespace std;

const int MAX_SIZE = 300;

void addMatrices(int i , int col, int a[], int b[], int a1[], int b1[]) {
    if(i == col) return ;  
        a1[i] += a[i]; 
        b1[i] += b[i];
        addMatrices(i + 1, col, a, b, a1,b1);
    
}

int main() {
    int row, col;
    cin >> row >> col;


    int a1[MAX_SIZE]={0};
    int b1[MAX_SIZE]={0};
        int a[MAX_SIZE];
        int b[MAX_SIZE];
    for (int r = 0; r < row; ++r) {

        // Input values for matrix A
        for (int i = 0; i < col; i++) {
            cin >> a[i];
        }

        // Input values for matrix B (they will overwrite A)
        for (int i = 0; i < col; i++) {
            cin >> b[i];
        }

        // Output the result for the current row
        addMatrices(0, col, a, b,a1,b1);

 
    }
      for (int i = 0; i < col; ++i) {
        if(i == col-1){
            cout<<a1[i]<<endl;
        }else{

            cout << a1[i] << " ";
        }
        }
       
         for (int i = 0; i < col; ++i) {
               if(i == col-1){
            cout<<b1[i]<<endl;
        }else{

            cout << b1[i] << " ";
        }
        }
       
    return 0;
}
