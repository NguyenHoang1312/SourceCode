#include<bits/stdc++.h>
using namespace std;

class Marks {
    int math, english, literature;
public:
    void setMarks();
    void getMarks();
};

class Student {
private:
    string id, name, age;
    Marks mark;
public:
    Student();
    ~Student();
};

