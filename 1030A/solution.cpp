#include <iostream>
using namespace std;

void solution(int arr[], int n)
{
    int ans = -1;
    for(int i=0; i<n; i++){
      if(arr[i]==1){
          ans = 1;
      }
    }
    if (ans == -1){
        cout<<"EASY";
    } else {
        cout<<"HARD";
    }
 }

int main()
{
   int n;
   cin>>n;
   int arr[100];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   solution(arr, n);
}