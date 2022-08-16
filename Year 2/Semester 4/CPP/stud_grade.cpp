//Write a C ++ program to create a student detail having name, roll no and 3 marks. Find the grades according to the following table.

#include<iostream>
using namespace std;

struct stud {
    int rno, marks[3];
    char name[20], grade;
}s[10];

char calc(int tot){
    if(tot >=95) return 'O';
    else if(tot>=85)    return 'A';
    else if(tot>=75)    return 'B';
    else if(tot>=65)    return 'C';
    else if(tot>=55)    return 'D';
    return 'F';
}

int main()
{
    int n, total;
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
        s[i].grade = calc(total/3);
    }
    for(int i=0; i<n; ++i) {
        cout<<"\nName: "<<s[i].name<<"\nRoll: "<<s[i].rno<<"\nMark 1: "<<s[i].marks[0]<<"\t Mark 2: "<<s[i].marks[1]<<"\tMark 3: "<<s[i].marks[2];
        cout<<"\nGrade: "<<s[i].grade;
    }
}