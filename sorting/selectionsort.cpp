class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
            
            
        }
        swap(arr[i],arr[mini]);
        
    }
    }
};




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int arr[]={6,5,4,8,2,1};
  int n=6;
        for(int i=0;i<n;i++){
            int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
            
            
        }
         for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        swap(arr[i],arr[mini]);
       
        cout<<endl;
    }

    return 0;
}



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     int arr[]={6,5,4,8,2,1};
  int n=6;
        for(int i=0;i<n;i++){
            int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[mini]){
                mini=j;
            }
            
            
        }
         for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        swap(arr[i],arr[mini]);
       
        cout<<endl;
    }

    return 0;
}