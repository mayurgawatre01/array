 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cout<<"enter the valve of array";

    cin>>n;
    int arr[n];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

 }