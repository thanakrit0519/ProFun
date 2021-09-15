#include <bits/stdc++.h>

 using namespace std;
  int arr[2510];
  void show(int i, int j){
      for(;i<=j;i++){
          cout<<arr[i];
      }
      return;
  }
  int main(){
      int n;
      scanf("%d",&n);
      for(int i = 0 ; i < n ; ++i){
          cin>>arr[i];
      }
      int mx = -1e9;
      for(int i = 0 ; i < n ; ++i){
          int sum = 0;
          for(int j = i ; j < n;  ++j){
              sum += arr[j];
              mx = max(mx, sum);
          }
      }
      if(mx <= 0){
          printf("Empty sequence");
          return 0;
      }
      for(int i = 0 ; i  < n; ++i){
          int sum = 0;
          for(int j = i; j < n ; ++j){
              sum += arr[j];
              if(sum == mx){
                  show(i,j);
                  printf("\n%d",mx);
                  return 0;
              }
          }
      }
  }
