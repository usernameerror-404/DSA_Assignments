// question 4 b part: multiplication of 2 matrices
#include <iostream>
using namespace std;

int main(){
    int m, n, p;
    cout << "Enter rows and cols of first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter cols of second matrix (p): ";
    cin >> p;

    int A[m][n], B[n][p], C[m][p] = {0};

    cout << "Enter first matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter second matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    //multipication
    for(int i=0; i<m; i++){
        for (int j=0; j<p; j++){
            for(int k=0; k<n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i = 0; i<m; i++){
        for(int j=0; j<p; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
