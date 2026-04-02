//[Naive Approach] Rotate one by one 
//Time Complexity- O(n * d) 
//Space Complexity-O(1) 
#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
// void rotateArr(vector<int>& arr, int d) {
//     int n = arr.size();
//     for (int i = 0; i < d; i++) {
      
//         int first = arr[0];
//         for (int j = 0; j < n - 1; j++) {
//             arr[j] = arr[j + 1];
//         }
//         arr[n - 1] = first;
//     }
// }

// int main() {
//     vector<int> arr = { 1, 2, 3, 4, 5, 6 };
//     int d = 2;

//     rotateArr(arr, d);

//     for (int i = 0; i < arr.size(); i++)
//         cout << arr[i] << " ";

//     return 0;
// }

//[Better Approach] Using Temporary Array - O(n) Time and O(n) Space
// void rotateArr(vector<int>& arr, int d) {
//     int n = arr.size();

   
//     d %= n;
  
//     vector<int> temp(n);

    
//     for (int i = 0; i < n - d; i++)
//         temp[i] = arr[d + i];

    
//     for (int i = 0; i < d; i++)
//         temp[n - d + i] = arr[i];

//     for (int i = 0; i < n; i++)
//         arr[i] = temp[i];
// }

// int main() {
//     vector<int> arr = { 1, 2, 3, 4, 5, 6 };
//     int d = 2;

//     rotateArr(arr, d);

    
//     for (int i = 0; i < arr.size(); i++)
//         cout << arr[i] << " ";

//     return 0;
// }
//[Expected Approach 1] Using Juggling Algorithm - O(n) Time and O(1) Space
void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    d %= n;

    reverse(arr.begin(), arr.begin() + d);


    reverse(arr.begin() + d, arr.end());
 
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
  	rotateArr(arr, d);
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
