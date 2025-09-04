//question 7: to find the inversions

#include<iostream>
using namespace std;
#define max 100

void countinversion(int invarr[max], int size){
    int invcount = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(invarr[j] > invarr[i]){
                invcount++;
            }
        }
    }
    cout<<"Total inversions: "<<invcount<<endl;
}
int main(){
    int invarr[max] = {1,3};
    int size =sizeof(invarr)/sizeof(invarr[0]);
    countinversion(invarr, size);
    
}