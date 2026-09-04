#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    double cgpa;

    Student(int id, string name, double cgpa) {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
    }

    void printInfo() {
        cout << id << endl;
        cout << name << endl;
        cout << cgpa << endl;
    }
};


int main() {
    Student *s1 = new Student(4, "OMIRU", 4.00);
    Student *s2 = new Student(49, "Mahin", 4.00);

    s1->printInfo();
    s2->printInfo();
}
