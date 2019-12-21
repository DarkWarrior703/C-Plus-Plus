#include <iostream>
#include <ctime>

void getArray(int a[], int n){
    if(n > 0){
    a[n] = 1;
    getArray(a, n - 1);
    }
    else
    return;
}
void changeValue(int a[], int n, int j, int i){
    if(j <= n){
        a[j] = 0;
        changeValue(a, n, j + i, i);
    }
}

void primes(int a[], int n, int i = 2){
    a[0] = 0;
    a[1] = 0;
    if(a[i])
    changeValue(a,n,2*i,i);
    if(i < n)
    primes(a, n , i + 1);
}

void printnr(int a[], int n, int i = 2){
    if(a[i])
    std::cout << i << " ";
    if(i < n)
    printnr(a,n,i + 1);
}

int main()
{
    int a[10000000], n = 10000000;
    int start = clock();
    getArray(a,n);
    primes(a,n);
    printnr(a,n);
    int stop = clock();
    std::cout << std::endl << (stop - start) / double(CLOCKS_PER_SEC) * 1000;
}
