#include<iostream>
using namespace std;


//linear search
int linearsearch(int arr[], int n, int targetnumber){
    for (int i = 0; i<n; i++){
        if ((arr[i])==targetnumber)
        return i;
        
    }
    return -1;
}

//binary search
int binarysearch(int arr[], int n, int targetnumber){
    int start=0, end = n-1;
    while(start<=end){
        int middle = (start+end)/2;
        if (arr[start]==targetnumber){
            return middle;
        }
        else if(arr[start]<=arr[end]){
            start = middle+1;
        }
        else{
            end = middle-1;

        }
        
    }
    

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int targetnumber = 5;
    int result = linearsearch(arr, n, targetnumber);
    cout<<result<<endl;
    int result2 = binarysearch(arr, n, targetnumber);
    cout<<result2<<endl;

    return 0;

}
