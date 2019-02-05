#ifndef COURSE_H
#define COURSE_H

#include "student.h"
#include <string>

using namespace std;

class Course {
private:
    int num_students,
        max_students,
        professor_cwid,
        class_num,
        section_num;
    string professor_fname,
        professor_lname;
    Student *students;

public:
    // Constructors
    Course() {
        // TODO
    }
    Course(int max) {
        // TODO
    }

    // Mutators
    void set_class_number(int num) { class_num = num; }
    void set_section_number(int num) { section_num = num; }
    void set_professor_cwid(int id) { professor_cwid = id; }
    void set_professor_fname(string fname) { professor_fname = fname; }
    void set_professor_lname(string lname) { professor_lname = lname; }
    void enroll_student(Student student) {
        // TODO
    }

    // Accessors
    int get_class_number() { return class_num; }
    int get_section_number() { return section_num; }
    int get max_students() { return max_students; }
    int get_professor_cwid() { return professor_cwid; }
    string get_professor_fname() { return professor_fname; }
    string get_professor_lname() { return professor_lname; }
    Student get_student(int index) {
        // TODO
    }
};

#endif
