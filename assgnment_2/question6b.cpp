#include<iostream>
using namespace std;
#define max 100

struct triple {
    int col1, col2, col3;
};

void addsparce(int sizea, triple a[max], int sizeb, triple b[max], int sizesum, triple sum[max]){
    int i=0, j =0;
    while(i<sizea && j<sizeb){
        if(a[i].col1<b[j].col1 || (a[i].col1 == b[j].col1 && a[i].col2<b[j].col2)){
            sum[sizesum].col1 = a[i].col1;
            sum[sizesum].col2 = a[i].col2;
            sum[sizesum].col3 = a[i].col3;
            i++, sizesum++;
        }
        else if(a[i].col1>b[j].col1 || (a[i].col1 == b[j].col1 && a[i].col2 >b[j].col2)){
            sum[sizesum].col1 = b[j].col1;
            sum[sizesum].col2 = b[j].col2;
            sum[sizesum].col3 = b[j].col3;
            j++, sizesum++;
        }
        else{
            int valuesum = a[i].col3 + b[j].col3;
            if(sum!=0){
                sum[sizesum].col1 = a[i].col1;
                sum[sizesum].col2 = a[i].col2;
                sum[sizesum].col3 = valuesum;
                sizesum++;
            }
            i++, j++;
        }
    }
    //if any array is bigger than the outher one
    while(i<sizea){
        sum[sizesum].col1 = a[i].col1;
        sum[sizesum].col2 = a[i].col2;
        sum[sizesum].col3 = a[i].col3;
        i++, sizesum++;
    }
    while(j<sizeb){
        sum[sizesum].col1 = b[j].col1;
        sum[sizesum].col2 = b[j].col2;
        sum[sizesum].col3 = b[j].col3;
        j++, sizesum++;
    }
    
    cout<<"Output: "<<endl;
    for(int k = 0; k<sizesum; k++){
        cout<<sum[k].col1<<" "<<sum[k].col2<< " "<<sum[k].col3;
        cout<<endl;
    }
}

int main(){
    triple a[max] = { {0,2,5}, {1,1,8}, {2,0,3} }; 
    int sizea = sizeof(a) / sizeof(a[0]);

    triple b[max] = { {0,2,6}, {1,0,4}, {2,0,1} };
    int sizeb = sizeof(b) / sizeof(b[0]);

    triple sum[max] = {0};
    int sizesum = 0;

    addsparce(sizea, a, sizeb, b, sizesum, sum);


}