class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count=0;
       set<int> set;
      for(auto i:jewels){
          set.insert(i);
      }
      for(auto x:stones){
          if(set.count(x))
          count++;
      }
      return count;
    }
};