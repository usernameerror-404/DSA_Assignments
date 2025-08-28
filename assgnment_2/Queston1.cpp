#include<iostream>
using namespace std;

int arraysearch(arr[], int n, int targetnumber){
    int 

}


int main(){
    int a[] = {24,76,2,6,0,4};
    int b = 2;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    

    return 0;
}