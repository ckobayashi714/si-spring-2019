#ifndef STUDENT_H
#define STUDENT_H

#include "string"

using namespace std;

class Student {
private:
    int cwid;
    string student_fname,
        student_lname;

public:
    // Contructors
    Student() : cwid(-1) {}
    Student(string fname, string lname, int id) : 
        cwid(id), student_fname(fname), student_lname(lname) {}

    // Mutators
    void set_cwid(int id) { cwid = id; }
    void set_fname(string fname) { student_fname = fname; }
    void set_lname(string lname) { student_lname = lname; }

    // Accessors
    string get_cwid () { return cwid; }
    string get_fname () { return student_fname; }
    string get_lname () { return student_lname; }
};

#endif
