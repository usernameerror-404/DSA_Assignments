//multiplication of sparce matrix

#include<iostream>
using namespace std;
#define max 100

struct triple{
    int col1, col2, col3;
};

void multiplysparce( triple a[max],  triple b[max], triple mul[max]){
    //1st of all checking the compatibility
    if(a[0].col2 != b[0].col1){
        cout<<"Matrices cannot be multiplied!"<<endl;
    }
    mul[0].col1 = a[0].col1;mul[0].col2 = b[0].col2; mul[0].col3 = 0;

    int k=1;//as 0th index contains the metadata
    for (int i=0; i<a[0].col3; i++){
        for(int j=0; j<b[0].col3; j++){
            if(a[i].col2 == b[j].col1){
                bool found = false;
                
                //if element already present then add the other product to it
                for (int x=1; x<k; x++){
                    if(mul[x].col1 == a[i].col1 && mul[x].col2 == b[j].col2){
                        mul[x].col3 += a[i].col3 * b[j].col3;
                        found = true;
                        break;
                    }
                }
                //if not found
                if(!found){
                    mul[k].col1 = a[i].col1;
                    mul[k].col2 = b[j].col2;
                    mul[k].col3 = a[i].col3 * b[j].col3;
                    k++;
                }

            }
        }
    }
    mul[0].col3 = k-1; //updating the number of non zero elements
}