#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> arr(15, 0.0);

    for(int i = 0; i < 15; ++i) std::cin >> arr[i];

    std::cout << *std::min_element(arr.begin(), arr.begin()+4) << " " << *std::min_element(arr.begin() + 5, arr.begin() + 9) << " " << *std::min_element(arr.begin() + 10, arr.end()) << std::endl;

    std::vector<int> copy_arr = arr;
    std::sort(copy_arr.begin(), copy_arr.end());
    for (const auto& num: arr) {std::cout << num << " ";}
    std::cout << std::endl;

    std::vector<int> buf;
    for (const auto& num: arr)
    {
        int amount = std::count(arr.begin(), arr.end(), num);

        if (amount > 2 and std::find(buf.begin(), buf.end(), num) == buf.end()) buf.push_back(num);
    }

    std::cout << buf.size() << std::endl;

    auto is_pow2 = [](int n) { return n > 0 && (n & (n - 1)) == 0; };

    for (int i = 0; i < arr.size(); ++i) 
    {
        if (!is_pow2(arr[i])) continue;

        int subseq_len = 0;
        int j = 0;
        for (j = i + 1; j < arr.size() and is_pow2(arr[j]); ++j) subseq_len++;

        if (subseq_len > 1) std::cout << i << "to" << i + subseq_len << std::endl;
        i += subseq_len;
    }

    return 0;
}