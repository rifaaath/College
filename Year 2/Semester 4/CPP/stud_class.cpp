//Write a C ++ program to create a details of n students having roll no, name, marks of 3 subjects using class and display the details of a students by the specified roll no.

#include<iostream>
using namespace std;

class stud{
    public:
    int rno, marks[3];
    char name[20];
}s[10];

int main()
{
    int n, search;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter details\n";
    for(int i=0; i<n; ++i) {
        cout << "Student " << i+1 << endl;
        cout << "Name: ";   cin>> s[i].name;
        cout << "Roll: ";   cin>> s[i].rno;
        cout << "Enter marks in 3 sub: ";
        cin >> s[i].marks[0] >> s[i].marks[1] >> s[i].marks[2];
    }
    cout<<"Enter roll to search: "; cin >> search;
    for(int i=0; i<n; ++i)
        if(s[i].rno == search)
            cout<<"Name: "<<s[i].name<<"\nRoll: "<<s[i].rno<<"\nMark 1: "<<s[i].marks[0]<<"\t Mark 2: "<<s[i].marks[1]<<"\tMark 3: "<<s[i].marks[2];
}