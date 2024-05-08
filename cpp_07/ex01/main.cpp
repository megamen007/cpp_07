#include "iter.hpp"

int main()
{
    char arr[] = {'a','b','c','d'};
    iter<char>(arr,4,plus<char>);

    int arr1[] = {1, 84 , -63, 13};
    iter<int>(arr1,4,plus<int>);
}