//sparse matrix
#include<iostream>
using namespace std;


int main(){
    int m,n;
    cout<<"Enter the rows and coloumns for your matrix: "<<endl;cin>>m>>n;
    int mat[m][n] = {0};
    cout<<"Enter the elements for your matrix: "<<endl;
    
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Normal Matrix: "<<endl;
    for(int i=0; i<m;i++){
        for(int j= 0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //conversion to sparce matrix
    
    int spmat[100][3];
    int var_row = 0;
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            if(mat[i][j] != 0){
                spmat[var_row][0] = i;
                spmat[var_row][1] = j;
                spmat[var_row][2] = mat[i][j];
                var_row++;
            }
        }
    }

    cout<<"sparse matrix: "<<endl;
    for(int i=0; i<var_row; i++){
        for(int j = 0; j<3; j++){
            cout<<spmat[i][j]<<" ";
        }
        cout<<endl;
    }


    //transpose through sparse matrix
    int transposespmat[100][100] = {0};
    cout<<"Sparce matrix transpose: "<<endl;
    for(int i=0; i<var_row; i++){
        transposespmat[i][0] = spmat[i][1];
        transposespmat[i][1] = spmat[i][0];
        transposespmat[i][2] = spmat[i][2];
    }   
    
    for(int i=0; i<var_row; i++){
        for (int j=0; j<3; j++){
            cout<<transposespmat[i][j]<<" ";
        }
        cout<<endl;
    }

    //sparce matrix addition:

    

    //multiplication through sparse
    int multiplicatedmat[100][100] = {0};
    for(int i=0; i<var_row; i++){
        multiplicatedmat[i][2] += spmat[i][2] * spmat[i][2];
    }
}