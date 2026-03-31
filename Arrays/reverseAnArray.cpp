//Naive Approach Using a temporary array 
//Time Complexity O(n) 
//Space Complexity- O(n) 
#include <iostream>
#include <vector>
using namespace std;
// void reversearray( vector<int> &arr){
//       int n =arr.size();
//       vector<int> temp(n);
//       for(int i=0;i<n;i++){
//         temp[i]=arr[n-i-1];
//       }
//       for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//       }
// }
// int main(){
//         vector<int> arr = { 1, 4, 3, 2, 6, 5 };
//         reversearray(arr);
//         for(int i=0;i<arr.size();i++){
//             cout<<arr[i]<<" "<<endl;
//         }
// }

//[Expected Approach - 1] Using Two Pointers 
//Time Complexity-O(n) 
//Space Complexity- O(1) 
// void reversearray(vector<int> &arr){
//     int left=0,right=arr.size()-1;
    
//         while(left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
//     }
//     int main() {
//     vector<int> arr = { 1, 4, 3, 2, 6, 5 };

//     reversearray(arr);
  
//     for(int i = 0; i < arr.size(); i++) 
//         cout << arr[i] << " ";
//     return 0;
// }
//[Expected Approach - 2] Using Single Pointer 
//Time Complexity-O(n) 
//Space Complexity-O(1) 
// void reversearray(vector<int> &arr){
//     int n=arr.size();
//     for(int i=0;i<n/2;i++){
//         swap(arr[i],arr[n-i-1]);
//     }
// }
//      int main() {
//     vector<int> arr = { 1, 4, 3, 2, 6, 5 };

//     reversearray(arr);
  
//     for(int i = 0; i < arr.size(); i++) 
//         cout << arr[i] << " ";
//     return 0;
// }
//Using Inbuilt Methods - 
//Time Complexity-O(n) 
//Space Complexity-O(1) 
#include <algorithm> 

void reverseArray(vector<int> &arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}