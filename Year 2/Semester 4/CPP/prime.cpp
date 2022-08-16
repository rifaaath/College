//Write a C ++ program to print the all the prime numbers in the given range.

#include<iostream>
using namespace std;

int isPrime(int n)
{
    if(n < 2)   return 0;   //0=False 1=True

    for(int i = 2;i < n; i++) 
        if(n % i == 0) return 0;

    // if reached here then must be true
    return 1;
}

int main()
{
    int lower, upper;
    cout<<"Enter range: ";
    cin >> lower >> upper;
    
    for(int i = lower; i <= upper; i++)
        if(isPrime(i))
            cout << i << " ";
}