#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>

using namespace std;
namespace sol288
{
  class Solution
  {
  private:
    unordered_map<string, unordered_set<string>> map;

  public:
    Solution(vector<string> &dictionary);
    bool isUnique(string &word);
  };
}
#endif