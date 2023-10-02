/*
Author: Swapnil Vivek Kulkarni

Write function takes input as integer array of distict integers and retun the length
of heightst mountain
-Mountain defined as adjucent integers that are strictly increasing until 
they reach the pick at wich become strictly decreasing
At least 3 numbers required to form mountain */

#include <iostream>
#include <vector> 

using namespace std;

int highest_mountain(vector<int> arr) {
  int largest = 0;
  int n = arr.size();
  for(int i=1; i<n-2;) {
    //Check pick is or not ?
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
      //iterate backward
      int j = i;
      int cnt = 1;
      while(j>=1 && arr[j]>arr[j-1]) {
        cnt++;
        j--;
      }
    //iterate forword
      while(i<=n-2 && arr[i]>arr[i+1]){
        cnt++;
        i++;
      }
      largest = max(largest, cnt);
    } else {
      i++;
    }
  }

  return largest;
}

int main() {
  vector<int> arr {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
  cout<<"Highest Mountain Size Is "<<highest_mountain(arr)<<endl;
  return 0;
}


