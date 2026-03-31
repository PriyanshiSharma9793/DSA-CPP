//Time Complexity- O(n * log n)  
//Space Complexity- O(1) 
//[Naive Approach] Using Sorting 
#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;
// int thirdLargest(vector <int> &arr){
//     int n=arr.size();
//     sort(arr.begin(),arr.end());
//     return arr[n-3];
// }
// int main(){
//     vector<int> arr={1,14,2,16,10,20};
//     cout<<thirdLargest(arr)<<endl;
//     return 0;
//}

//[Expected Approach - 1] Using Three Loops - O(n) time and O(1) space
// int thirdElement(vector<int> &arr){
//     int n=arr.size();
//     int first=  INT_MIN;;
//     for(int i=0;i<n;i++){
//        if(arr[i]>first)first=arr[i];
//     }
//     int second=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second && arr[i]<first)
//         second=arr[i];
//     }
//     int third= INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>third && arr[i]<second){
//         third =arr[i];
//     }
// }

// return third;
// }
// int main(){
//     vector<int> arr={1,14,2,16,10,20};
//     cout<<thirdElement(arr)<<endl;
//     return 0;
// }

//[Expected Approach - 2] Using Three variables - O(n) time and O(1) space
int  thirdelement(vector<int> &arr){
    int n=arr.size();
    int first= INT_MIN, second= INT_MIN , third= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
          third=second;
          second=first;
          first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }

       else if (arr[i] > third) {
            third = arr[i];
        }
    }
    return third;
}
   int main() {
    vector<int> arr = {1, 14, 2, 16, 10, 20};
    cout << thirdelement(arr) << endl;

    return 0;
}

