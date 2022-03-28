#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol288;

/* All Examples:
Given dictionary = [ "deer", "door", "cake", "card" ]

isUnique("dear") -> false
isUnique("cart") -> true
isUnique("cane") -> false
isUnique("make") -> true
*/
const vector<string> dict = vector<string>{"deer", "door", "cake", "card"};
tuple<string, vector<string>, bool>
testFixture1()
{
  return make_tuple("dear", dict, false);
}

tuple<string, vector<string>, bool>
testFixture2()
{
  return make_tuple("cart", dict, true);
}

tuple<string, vector<string>, bool>
testFixture3()
{
  return make_tuple("cane", dict, false);
}
tuple<string, vector<string>, bool>
testFixture4()
{
  return make_tuple("make", dict, true);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<2>(f) << endl;
  Solution sol(get<1>(f));
  auto result = sol.isUnique(get<0>(f));
  cout << "result: " << result << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - exepct to see " << get<2>(f) << endl;
  Solution sol(get<1>(f));
  auto result = sol.isUnique(get<0>(f));
  cout << "result: " << result << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - exepct to see " << get<2>(f) << endl;
  Solution sol(get<1>(f));
  auto result = sol.isUnique(get<0>(f));
  cout << "result: " << result << endl;
}
void test4()
{
  auto f = testFixture4();
  cout << "Test 4 - exepct to see " << get<2>(f) << endl;
  Solution sol(get<1>(f));
  auto result = sol.isUnique(get<0>(f));
  cout << "result: " << result << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}