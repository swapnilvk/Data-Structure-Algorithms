#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> PairSum(vector<int> arr, int targetSum) {
  unordered_set<int> s;
  vector<int> result;
  for(auto iter : arr){
      int c = targetSum - iter;
      if(s.find(c) != s.end()){
        result.push_back(iter);
        result.push_back(c);
      } else {
        s.insert(iter);
      }
  }
  return result;
}

int main() {
  vector<int> arr = {10, 5, 12, 3, -6, 9, 11};
  int targrtSum = 4;
  auto p = PairSum(arr, 4);
  if(p.size() == 0 )
    cout<<"No sucj pair"<<endl;
  else 
    cout<<p[0]<<","<<p[1]<<endl;
  return 0;
}
