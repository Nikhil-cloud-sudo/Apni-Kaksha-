#include<iostream>
#include<climits>

using namespace std; 

int Kadane_Algorithm(int arr[], int n){
    int max_sum = INT_MIN;
    int sum_ending_here = 0; 


    for(int i=0; i<n; i++){
        sum_ending_here += arr[i];

        if(sum_ending_here < 0)
            sum_ending_here =0;

    max_sum = max(max_sum, sum_ending_here);

    }

return max_sum;
}

int main(){ 
    int n;
    cin>>n; 

    int arr[n]; 

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int wrap_sum; 
    //int non_wrap_sum;
    int non_wrap_sum = Kadane_Algorithm(arr, n);
    int sum = 0; 
    for(int i=0; i<n; i++){
        sum += arr[i];
        arr[i] = -arr[i];
    }


    wrap_sum = sum + Kadane_Algorithm(arr, n);


    cout<< max(wrap_sum, non_wrap_sum);


return 0;


}