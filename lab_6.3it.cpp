#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;

int count_even(int a[], int n);
template <typename T>
int count_even(T a[], int n);

#ifndef UNIT_TEST
int main(){
    const int n = 20;
    int a[n], i, low = -20, high = 34, count = 0;
    double b[20] = {2.5, 4.0, 7.2, 8.0, 3.1,6.0, 9.5, 10.0, 12.0, 3.4,14.0, 5.5, 16.0, 7.8, 18.0,1.2, 20.0, 11.3, 22.0, 13.5};
    srand((unsigned)time(NULL));

    for(i=0; i < n; i++){
        a[i] = low + rand() % (high - low + 1);
    }
    cout << "Початковий масив: " << endl;
    for(i=0; i < n; i++){
        cout << setw(4) << a[i];
    }
    cout << endl;

    count = count_even(a, n);
    cout << "Кількість парних елементів: " << count << endl;

    int result = count_even(b, 20);
    cout << "Кількість парних елементів double-масиву: " << result << endl;

    return 0;
}
#endif

int count_even(int a[], int n){
    int count = 0;
    for(int i=0; i < n; i++){
        if(a[i] % 2 == 0){
            count += 1;
        }
    }
    return count;
}
template <typename T> 
int count_even(T a[], int n){
    int count = 0;
    for(int i=0; i < n; i++){
        if(fmod(a[i], 2.0) == 0){
            count += 1;
        }
    }
    return count;
}