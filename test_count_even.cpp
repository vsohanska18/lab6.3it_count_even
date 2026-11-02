
#include <gtest/gtest.h>
#include <cmath>

int count_even(int a[], int n);

template <typename T>
int count_even(T a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (fmod(a[i], 2.0) == 0) {
            count += 1;
        }
    }

    return count;
}

// Тест 1: звичайний масив int
TEST(CountEvenTest, IntegerArray)
{
    int a[20] = {
        2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21
    };

    EXPECT_EQ(count_even(a, 20), 10);
}

// Тест 2: масив int без парних чисел
TEST(CountEvenTest, NoEvenIntegers)
{
    int a[20] = {
        1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
        21, 23, 25, 27, 29, 31, 33, 35, 37, 39
    };

    EXPECT_EQ(count_even(a, 20), 0);
}

// Тест 3: масив double
TEST(CountEvenTest, DoubleArray)
{
    double a[20] = {
        2.5, 4.0, 7.2, 8.0, 3.1,
        6.0, 9.5, 10.0, 12.0, 3.4,
        14.0, 5.5, 16.0, 7.8, 18.0,
        1.2, 20.0, 11.3, 22.0, 13.5
    };

    EXPECT_EQ(count_even(a, 20), 10);
}

// Тест 4: масив double без парних чисел
TEST(CountEvenTest, NoEvenDoubles)
{
    double a[20] = {
        1.1, 3.3, 5.5, 7.7, 9.9,
        11.1, 13.3, 15.5, 17.7, 19.9,
        21.1, 23.3, 25.5, 27.7, 29.9,
        31.1, 33.3, 35.5, 37.7, 39.9
    };

    EXPECT_EQ(count_even(a, 20), 0);
}