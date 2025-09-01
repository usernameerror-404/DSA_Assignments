#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Rows and coloumns for the 1st matrix: "<<endl;
    int m,n,p;
    cin>>m>>n;
    cout<<"Enter no. of coloumns for 2nd matrix: "<<endl;
    cin>>p;
    int a[10][10], b[10][10], c[10][10];

    //1st matrix input
    cout<<"Enter elements for the 1st matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    //2nd matrix input
    cout<<"Enter elemnts for the 2nd matrix: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0;j<p;j++){
            cin>>b[i][j];
        }
    }

    //multiplication
    for (int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            c[i][j]=0;
            for (int k=0;k<n;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    //final matrix output
    cout<<"Final matrix after the multiplication: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<p;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}