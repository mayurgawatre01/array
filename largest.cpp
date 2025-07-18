#include<iostream>
using namespace std;
int main(){
    int arr[10]={12,23,34,45,56,43,32,12,78,90};
    int n=sizeof(arr)/sizeof(int);
    int max=0;
    for(int i=0; i<n; i++){
        if (arr[i]>max){
            max =arr[i];
            cout<<"assigning val" <<arr[i]<<"to max\n";
        }
    }
    cout<<"Largest element in the array is: "<<max<<endl;
    return 0;
}