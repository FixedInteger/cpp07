#include  <iostream>

//template to swap two values

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

//template to compare two values

template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

//template to compare two values

template <typename T>

T max(T a, T b)
{
    return (a > b) ? a : b;
}


int main()
{
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << " b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;

    std::cout << "min(2, 3) = " << min(a, b) << std::endl;
    std::cout << "max(2, 3) = " << max(a, b) << std::endl;

    return 0;
}