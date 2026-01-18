#include <iostream>

#define CAPACITY 5

void push_right(int *arr)
{
    for (int i = 0; i < CAPACITY - 1; ++i)
    {
        for (int j = 0; j < CAPACITY - 1 - i; ++j)
        {
            if (arr[j] < 0 and arr[j + 1] > 0)
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void push_left(int *arr)
{
    for (int i = 0; i < CAPACITY - 1; ++i)
    {
        for (int j = 0; j < CAPACITY - 1 - i; ++j)
        {
            if (arr[j] > 0 and arr[j + 1] < 0)
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr1[CAPACITY], arr2[CAPACITY];

    int i = 0, j = 0;

    while (i < CAPACITY) std::cin >> arr1[i++];

    while (j < CAPACITY) std::cin >> arr2[j++];

    push_right(arr1);
    push_left(arr2);

    for (i = 0; i < CAPACITY; ++i)
    {
        if (arr1[i] < 0)
        {
            for (j = 0; j < CAPACITY and arr2[j] < 0; ++j) {}

            if (j == CAPACITY) break;

            std::swap(arr1[i], arr2[j]);
        }
    }

    for (i = 0; i < CAPACITY; ++i)
    {
        if (arr1[i] < 0) arr1[i] = 0;
        if (arr2[i] > 0) arr2[i] = 0;
    }

    for (i = 0; i < CAPACITY; ++i) std::cout << arr1[i] << " ";
    std::cout << std::endl;
    for (j = 0; j < CAPACITY; ++j) std::cout << arr2[j] << " ";

    return 0;
}