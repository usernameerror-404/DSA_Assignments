#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows and coloumns"<<endl;
    int rows, coloumns;
    cin>>rows>>coloumns;
    int matrix[rows][coloumns];

    cout<<"Enter the matrix elements"<<endl;
    for(int i = 0; i<rows; i++){
        for (int j=0; j<coloumns; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Matrix: "<<endl;
    for(int i = 0; i<rows; i++){
        for (int j=0; j<coloumns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
