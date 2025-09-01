#include<iostream>
#include<cmath>
using namespace std;

//Diagonal Matrix
void onlydiag(int diag[100], int n){
    cout<<"Diagonal matrix: "<<endl;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j){
                cout<<diag[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}


//tri-diagonal matrix
void tridiag(int lower[], int mainD[], int upper[], int n) {
    cout << "Tri-Diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {  // main diagonal
                cout << mainD[i] << " ";
            } 
            else if (i == j + 1) {  // lower diagonal
                cout << lower[j] << " ";
            } 
            else if (i + 1 == j) {  // upper diagonal
                cout << upper[i] << " ";
            } 
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    // int diag[100];
    // cout<<"Enter the diagonal elements: "<<endl;
    // for(int i=0; i<size; i++){
    //     cin>>diag[i];
    // }
    // onlydiag(diag, size);
    

    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    int lower[100], mainD[100], upper[100];

    cout << "Enter main diagonal elements (" << n << " elements): ";
    for (int i = 0; i < n; i++) cin >> mainD[i];
    cout << "Enter lower diagonal elements (" << n - 1 << " elements): ";
    for (int i = 0; i < n - 1; i++) cin >> lower[i];
    cout << "Enter upper diagonal elements (" << n - 1 << " elements): ";
    for (int i = 0; i < n - 1; i++) cin >> upper[i];

    tridiag(lower, mainD, upper, n);
    return 0;
}
