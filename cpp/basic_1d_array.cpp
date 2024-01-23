#include <bits/stdc++.h>

#define null nullptr

#define vi vector<int>
#define vl vector<long>

#define omii unordered_map<int, int>
#define osi unordered_set<int>

using namespace std;

int f(vi nums, int k) {
  return 0;
}

int main() {
  int cases_count, tmp, x, y;
  cin >> cases_count;
  for (int i = 0; i < cases_count; i++) {
    vi vec;
    cin >> x >> y;
    for (int j = 0; j < y; j++) {
      cin >> tmp;
      vec.push_back(tmp);
    }
    cout << f(vec, x) << endl;
  }
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  return 0;
}
