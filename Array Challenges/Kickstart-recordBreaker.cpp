#include<iostream>
#include<climits>

using namespace std;


int main(){
    int n;
    cin >> n;

    int arr[n];


    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx =0; 
    int counter =0; 
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]>mx){
            counter++;
        mx = max(mx, arr[i]);
        }
    }
    cout<<counter;



    return 0;

}