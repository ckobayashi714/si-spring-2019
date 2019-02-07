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

    // Mutators
    void set_class_number(int num) { class_num = num; }
    void set_section_number(int num) { section_num = num; }

    void set_professor_cwid(int id) { professor_cwid = id; }
    void set_professor_fname(string fname) { professor_fname = fname; }
    void set_professor_lname(string lname) { professor_lname = lname; }

    // Accessors
    int get_class_number() const { return class_num; }
    int get_section_number() const { return section_num; }
    int get max_students() const { return max_students; }

    int get_professor_cwid() const { return professor_cwid; }
    string get_professor_fname() const { return professor_fname; }
    string get_professor_lname() const { return professor_lname; }

};

// Constructors
Course::Course() {
    // TODO
}

Course::Course(int max) {
    // TODO
}

Student Course::get_student(int index) const {
    // TODO
}

void Course::enroll_student(const Student &student) {
    // TODO
}

#endif
