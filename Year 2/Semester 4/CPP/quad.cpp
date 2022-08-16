//Write a C ++ program to find the roots of quadratic equation.

#include <iostream>
#include <cmath> 
 
using namespace std;
 
int main() 
{
    float a, b, c, determinant, root1, root2, real, imag;
    cout << "Enter values for a, b, c: ";
    cin >> a >> b >> c;
    
    determinant = b*b - 4*a*c;
        
    if(determinant >= 0) {
        root1= (-b + sqrt(determinant))/(2 * a);
        root2= (-b - sqrt(determinant))/(2 * a);
        cout << "Roots are " << root1 << "  " << root2; 
    } else {
        real= -b/(2*a);
        imag = sqrt(-determinant)/(2 * a);
        cout << "Roots are " << real << "+" << imag << "i , " << real << "-" << imag << "i";
    }
}