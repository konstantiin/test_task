#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main(){
  int n;
  std::cin >> n;

  std::vector <int> costs(n);
  for (int &i: costs){
    std::cin >> i;
  }
  
  
  std::sort(costs.rbegin(), costs.rend());

  int total_sum = std::accumulate(costs.begin(), costs.end(), 0);
  for (int &i: costs){
    std::cout <<  total_sum - i << ' ';
  }
  


  return 0;
}