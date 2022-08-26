// set 1 question 1
#include <bits/stdc++.h>
using namespace std;
//main function
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){      //for loop to take array input from user
        cin>>arr[i];
    }
    cout<<"non repeating numbers are:";
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<",";
        }
    }

    return 0;
}