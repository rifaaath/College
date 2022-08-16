//Write a C ++ program to create a details of n students having roll no, name, marks of 3
//subjects using structure and display the students with highest grade.

#include<iostream>
using namespace std;

struct stud {
    int rno, marks[3];
    char name[20];
}s[10];

int main()
{
    int n, highest, first=0, total;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter details\n";
    for(int i=0; i<n; ++i) {
        total=0;
        cout << "Student " << i+1 << endl;
        cout << "Name: ";   cin>> s[i].name;
        cout << "Roll: ";   cin>> s[i].rno;
        cout << "Enter marks in 3 sub: ";
        cin >> s[i].marks[0] >> s[i].marks[1] >> s[i].marks[2];
        total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
        if(total>highest)   {
            highest = total;
            first = i;
        }
    }
    cout<<"Highest grade:\n";
    cout<<"Name: "<<s[first].name<<"\nRoll: "<<s[first].rno<<"\nMark 1: "<<s[first].marks[0]<<"\t Mark 2: "<<s[first].marks[1]<<"\tMark 3: "<<s[first].marks[2];
}