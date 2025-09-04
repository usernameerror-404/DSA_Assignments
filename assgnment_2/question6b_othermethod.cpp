#include<iostream>
using namespace std;
#define max 100


void addsparce(int sizea, int a[max][3], int sizeb, int b[max][3], int sizesum, int sum[max][3]){
    int i=0, j =0;
    while(i<sizea && j<sizeb){
        if(a[i][0]<b[j][0] || (a[i][0] == b[j][0] && a[i][1]<b[j][1])){
            sum[sizesum][0] = a[i][0];
            sum[sizesum][1] = a[i][1];
            sum[sizesum][2] = a[i][2];
            i++, sizesum++;
        }
        else if(a[i][0]>b[j][0] || (a[i][0] == b[j][0] && a[i][1] >b[j][1])){
            sum[sizesum][0] = b[j][0];
            sum[sizesum][1] = b[j][1];
            sum[sizesum][2] = b[j][2];
            j++, sizesum++;
        }
        else{
            int valuesum = a[i][2] + b[j][2];
            if(valuesum!=0){
                sum[sizesum][0] = a[i][0];
                sum[sizesum][1] = a[i][1];
                sum[sizesum][2] = valuesum;
                sizesum++;
            }
            i++, j++;
        }
    }
    // if both array are of different size
    while(i<sizea){
        sum[sizesum][0] = a[i][0];
        sum[sizesum][1] = a[i][1];
        sum[sizesum][2] = a[i][2];
        i++, sizesum++;
    }

    while( j<sizeb){
        sum[sizesum][0] = b[j][0];
        sum[sizesum][1] = b[j][1];
        sum[sizesum][2] = b[j][2];
        j++, sizesum++;
    }
    
    cout<<"Output: "<<endl;
    for(int k = 0; k<sizesum; k++){
        cout<<sum[k][0]<<" "<<sum[k][1]<< " "<<sum[k][2];
        cout<<endl;
    }
}

int main(){
    int a[max][3] = { {0,2,5}, {1,1,8}, {2,0,3} }; 
    int sizea = 3;

    int b[max][3] = { {0,2,6}, {1,0,4}, {2,0,1}, {3,0,3} };
    int sizeb = 4;

    int sum[max][3] = {0};
    int sizesum=0;

    addsparce(sizea, a, sizeb, b, sizesum, sum);

}