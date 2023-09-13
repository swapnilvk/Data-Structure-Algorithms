/*
Problem: https://leetcode.com/problems/top-k-frequent-words/description/

*/
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool compare(std::pair<string, int> p, std::pair<string, int> q) {  
  if(p.second == q.second)
    return (p.first > q.first);

  return (p.second > q.second);
}

class Solution {
  public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      std::unordered_map<string, int> mapOfWords;
      for(auto iterVec : words) {
        auto iterMap = mapOfWords.find(iterVec);
        if(iterMap == mapOfWords.end()) {
          mapOfWords.insert(std::unordered_map<string, int>::
              value_type(iterVec, 0));
        }
      }

      for(auto iterVec : words) {
        mapOfWords[iterVec]++;
      }
      std::vector<std::pair<string, int>> vecOfwordCount(mapOfWords.begin(),
          mapOfWords.end());
      sort(vecOfwordCount.begin(), vecOfwordCount.end(),compare);

      Display(vecOfwordCount);

      return words;
    }

    void Display(const std::vector<std::pair<string, int>> & vec) {
      for(auto iter : vec) {
        cout<<"|" <<iter.first<<" "<<iter.second<<"|"<<endl;
      }
    }
};

int main() {
  Solution obj;
  vector<string> vec = {"the","day","is","sunny","the","the","the","sunny","is","is"};
  obj.topKFrequent(vec, 6);
  return 0;
}
