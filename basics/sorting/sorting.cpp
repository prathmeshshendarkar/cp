#include <bits/stdc++.h>

using namespace std;

// void merge(int arr[], int l, int mid, int r){
//     int x = l, y = mid + 1;
//     int lens = r - l + 1;
//     int a[lens], z = 0;

//     for(int i = l; i <= r; i++){
//         if(x > mid){
//             a[z] = a[y];
//             z++;
//             y++;
//         }else if(y > r){
//             a[z] = a[x];
//             x++;
//             z++;
//         }else if(arr[x] < arr[y]){
//             a[z] = arr[x];
//             x++;
//             z++;
//         }else{
//             a[z] = arr[y];
//             z++;
//             y++;
//         }
//     }

//     for(int i = 0; i < z; i++){
//         std:cout << "Inside Loop " << a[i] << " ";
//         arr[l++] = a[i];
//     }
//     cout << "\n";
// }

// void mergeSort(int arr[], int l, int r) {
//     if(l < r){
//         int mid = (l + r)/2;

//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);

//         merge(arr, l, mid, r);
//         // for(int i = 0; i < r; i++){
//         //     cout << arr[i] << " ";
//         // }
//     }
// }

void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {
    if(p > mid)      //checks if first part comes to an end or not .
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   //checks if second part comes to an end or not
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     //checks which part has smaller element.
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   /* Now the real array has elements in sorted manner including both 
        parts.*/
    std:cout << "Inside Loop " << Arr[p] << " ";
    A[ start++ ] = Arr[ p ] ;                          
  }

  cout << "\n";
}

 void merge_sort(int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );
   }
}

int main(){
    int arr[7] = {4,1,2,0,3,10,8};

    merge_sort(arr, 0, 6);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
}