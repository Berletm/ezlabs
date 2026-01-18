#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int window(const std::vector<int>& arr)
{
    int n = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        int cur_num = arr[i];
        
        if (i < 1) {n++; continue;}

        for (int j = i; j < arr.size(); ++j)
        {
            if (arr[j - 1] + arr[j - 2] < arr[j]) n++;
        }
    }

    return n;
}

int main()
{
    std::vector<int> arr;

    int num;

    std::cin >> num;

    if (num == 0) 
    {
        std::cout << "empty arr" << std::endl;
        return 1;
    }

    while (num != 0)
    {
        arr.push_back(num);
        std::cin >> num;
    }

    // mean
    std::cout << std::accumulate(arr.begin(), arr.end(), 0.0) / double(arr.size()) << std::endl;

    // range
    std::cout << *std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()) << std::endl;

    // positive div 5
    std::cout << [](const std::vector<int>& arr) {int n = 0; for(const auto& elem: arr) {if (elem >= 0 and elem % 5 == 0) n++;} return n;}(arr) << std::endl;

    // is pow 2
    std::cout << [](const std::vector<int>& arr) {int n = 0; for(const auto& elem: arr) {if (elem > 0 and (((elem - 1) & elem) == 0)) n++;} return n;}(arr) << std::endl; 

    // window cmp
    std::cout << window(arr) << std::endl;

    return 0;
}