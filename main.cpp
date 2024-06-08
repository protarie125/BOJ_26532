#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> x >> y;
  const auto& a = (x * y) / 4840;
  const auto& r = (x * y) % 4840;

  cout << a / 5 + (0 == r ? 0 : 1);

  return 0;
}