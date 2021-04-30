#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int answer = 2;
    int difference = arr[1]-arr[0];
    int j = 2;
    int current = 2;
    while(j<n){
        if(difference == arr[j]-arr[j-1]){
            current++;
        }else{
            difference = arr[j]-arr[j-1];
            current = 2;
        }
        answer = max(answer, current);
        j++;
    }
    cout<< answer;


    return 0; 


}