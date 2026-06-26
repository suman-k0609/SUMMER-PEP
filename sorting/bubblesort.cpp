
void bubbleSort(int* arr, int n) {
    // Code here
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

//Ascending order growing from right to left
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int arr[]={6,5,4,8,2,1};
//     int n=6;
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 for(int k=0;k<n;k++){
//                     cout<<arr[k]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
//     }

//     return 0;
// }
