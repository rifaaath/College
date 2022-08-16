//Write a C ++ program to create a class called employee and enter the employee details having employee id , name, salary for n employee. Display the employee having highest salary.

#include<iostream>
using namespace std;

struct emp {
    int id, salary;
    char name[20];
}s[10];

int main()
{
    int n, highest, first=0;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter details\n";
    for(int i=0; i<n; ++i) {
        cout << "Student " << i+1 << endl;
        cout << "Name: ";   cin>> s[i].name;
        cout << "ID: ";   cin>> s[i].id;
        cout << "Salary: "; cin>> s[i].salary;
        if(s[i].salary>highest)   {
            highest = s[i].salary;
            first = i;
        }
    }
    cout<<"Highest salary:\n";
    cout<<"Name: "<<s[first].name<<"\nID: "<<s[first].id<<"\nSalary: "<<s[first].salary;
}