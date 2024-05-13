#include <iostream>
using namespace std;

class Matrix {
    private:
        int a[10][10],b[10][10],product[10][10];
        int row1,col1,row2,col2,i,j,k,sum;
    public:
        void matrix_mul () {
            cout << "Enter the number of rows and columns in matrix 1 : ";
            cin >> row1 >> col1;
            cout << "Enter the number of rows and colums in matrix 2 : ";
            cin >> row2 >> col2;

            if(row1 != col2) {
                cout << "Multiplication is not possible." << endl;
            }
            else {
                cout << "Enter the elements of first matrix : " << endl;
                for(i=0;i<row1;i++) {
                    for(j=0;j<col1;i++) {
                        cin >> a[i][j];
                    }
                }

                cout << "Enter the elements of second matrix : " << endl;
                for(i=0;i<row2;i++) {
                    for(j=0;j<col2;i++) {
                        cin >> b[i][j];
                    }
                }
                sum=0;
                //matrix multiplication.
                for(i=0;i<row1;i++) {
                    for(j=0;j<col2;j++) {
                        for(k=0;k<row2;k++) {
                            sum+=a[i][k]*b[k][j];
                        }
                        product[i][j]=sum;
                        sum=0;
                    }
                }
                //print product matrix
                for(i=0;i<row1;i++) {
                    for(j=0;j<col2;j++) {
                        cout << product[i][j];
                    }
                    cout << endl;
                }

            }
        }

};

int main() {
    Matrix obj;
    obj.matrix_mul();


    return EXIT_SUCCESS;
}