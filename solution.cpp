#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm>
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>
using namespace sol288;
using namespace std;

/*takeaways
  - the key is to define the map data structure that
    use abbreviation as the key and a set as the value
  - the value in the map needs to be a set as we need to
    - avoid duplicates in the dictionary
      [..."dear","dear",...]
    - make sure the word is the only one in the set
      if the abbreviation matches
*/
Solution::Solution(vector<string> &dictionary)
{
  for (auto d : dictionary)
  {
    auto abbr = d;
    const int size = d.size();
    /*
       - abbreviate the word and use it as
         the key of the map
    */
    if (size > 2)
      abbr = d[0] + to_string(size - 2) + d.back();
    /*use a set as the dict value
       - there might be multile words that have
         the same abbreviation
       - there might be words that are duplicate
         dict = [..."dear","dear"...]
       - use a set as the dict value
    */
    map[abbr].insert(d);
  }
}

bool Solution::isUnique(string &word)
{
  auto abbr = word;
  const int size = word.size();
  if (size > 2)
    abbr = word[0] + to_string(size - 2) + word.back();

  /*C++ notes
    - don't use map[abbr] to check as it will
      insert a new entry into the map if abbr
      has not existed yet in the map
  */
  if (!map.count(abbr))
    return true;

  auto &set = map[abbr];
  /* return true only if the word exists in the set and
     and it's the only one
  */
  return set.count(word) && set.size() == 1;
}