#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

int sum_intervals(vector<pair<int, int>> v) {
  sort(v.begin(), v.end(), [](auto x, auto y){return x.first != y.first ? x.first < y.first : x.second < y.second;});
  for( auto& el : v)
  {
      std::cout << el.first << " " << el.second << std::endl;
  }
  int r = 0, last = v[0].first;
  for (auto p : v) {
    int x = p.first;
    int y = p.second;
    if (y <= last)
        continue;
    r += y - max(x, last);
    last = y;
  }
  return r;
}




int main()
{

// std::vector<std::pair<int, int>> intervals{
// {406 , 494   },
// {416 , 442   },
// {-194,  62   },
// {-250,  185  },
// {113 , 206   },
// {-313,  -88  },
// {-483,  -379 },
// {-42 , 37    },
// {-31 , 97    },
// {-102,  406  },
// {-258,  330  },
// {112 , 194 }}; ///Expected: equal to 7
    // std::vector<std::pair<int, int>> intervals { {1, 5}, {-10, 8}, {1, 11}};


std::vector<std::pair<int, int>> intervals{
{1 , 5 },
{1 , 5 },
{6 , 10},
{1 , 5 },
{1 , 5 },
{1 , 4 },
{7 , 10},
{3 , 5 }};
    // std::vector<std::pair<int, int>> intervals { {1, 5}};
    intervals = {{1, 5}, {6, 10}, {1, 7}};


    std::cout << sum_intervals(intervals); // 8

    return 0;
}