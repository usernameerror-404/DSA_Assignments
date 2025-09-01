// bubble sort
#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {5,123,1,7,6,3,7598,44,34};
    int temp;

    for (int a = 0; a<n-1; a++){
        for (int i = 0; i<n-a-1; i++){
            if (arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}