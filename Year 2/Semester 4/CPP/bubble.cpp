//Write a C ++ program to sort a given set of elements using bubble sort.

#include<iostream>
using namespace std;

int main ()
{
    int a[20], n;
    cout << "Enter size n: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i<n; i++)    cin >> a[i];
    
    cout << "Before sorting: \n";
    for(int i=0; i<n; ++i)  cout << a[i] << '\t';

    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<"\nAfter sorting:\n";
    for(int i = 0; i<n; i++)    cout <<a[i]<<"\t";
}