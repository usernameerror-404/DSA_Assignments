#include<iostream>
using namespace std;

//lower triangular matrix
void lowertriangularmatrix(int lowertriangular[], int n){
    cout<<"Required lowertriangular matrix"<<endl;
    int k = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            if(i>=j){
                cout<<lowertriangular[k]<<" ";
                k++; 
            }
            else{
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
}
 //upper triangular matrix
void uppertriangularmatrix(int uppertriangular[], int n){
    cout<<"Required Upper-Triangular matrix: "<<endl;
    int k = 0;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i<=j){
                cout<<uppertriangular[k]<<" ";
                k++;
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

//symmetric matrix
void symmetricmatrix(int n){
    int size = n*(n+1)/2;
    int storeddiagonals[size] = {0};

    cout<<"Enter"<<size<<"elements for the symmetric matrix: "<<endl;
    for (int i=0; i<size; i++) cin>>storeddiagonals[i];
    int symmetricmatrix[n][n] = {0};
    int k=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<=i; j++){
            symmetricmatrix[i][j] = storeddiagonals[k++];
            symmetricmatrix[j][i] = symmetricmatrix[i][j];
        }
    }

    cout<<"Requires Symmetric matrix: "<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<symmetricmatrix[i][j]<<" ";
        }
        cout<<endl;
    }

       
}
   

int main(){
    cout<<"Enter the size of matrix (n x n): "; int n; cin>>n;
    symmetricmatrix(n);    
}
