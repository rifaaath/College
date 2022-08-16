//Write a C ++ program to reverse a given number without using built in function.

#include <iostream>
using namespace std;

int main() 
{
  int n, rev = 0, rem;

  cout << "Enter n: ";
  cin >> n;

  while(n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  cout << "Reversed Number = " << rev;
}