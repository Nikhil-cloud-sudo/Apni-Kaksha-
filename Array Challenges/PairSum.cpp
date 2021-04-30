#include<iostream>
#include<climits>


using namespace std;

int pairsum(int arr[], int n, int k){
    int sum; 
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            sum = arr[i] + arr[j];
            if(sum == k){
                cout<<i<<" ";
                return true;
            }

        }
    }
    return false; 
}

int main(){
    int arr[] = {2, 3, 4, 5, 11, 10, 22, 21};
    int k = 9; 

    int answer = pairsum(arr, 8, k);

    cout<<answer<<endl; 

}
