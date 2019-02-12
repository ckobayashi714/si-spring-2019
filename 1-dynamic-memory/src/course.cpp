
#include "course.h"
#include "student.h"
#include <stdexcept>

using namespace std;

// ===== TODO ===== //

// Initialize member variables.
// By default, course will hold a max of 25 students.
Course::Course() {
    max_students = 25;
    students = new Student[max_students];

    num_students = 0;     // Course is initially empty
    professor_cwid = -1;  // Indicates a professor isn't set
    class_num = -1;       // Indicates class number isnt set
}

// Very similar to default constructor, but parameter specifies max
// number of students.
Course::Course(size_t max) {
    max_students = max;
    students = new Student[max_students];

    num_students = 0;
    professor_cwid = -1;
    class_num = -1;
}

// Utilized to free allocated memory.
Course::~Course() {
    delete [] students;
}

// Fetch student at specified index.
// Utilize stdexcept to handle edge cases.
Student Course::get_student(size_t index) const {
    if (index >= num_students)
        throw out_of_range("index exceeds number of students");
    return students[index];  // Fetch student at specified index
}

// Insert a new student
// Utilize stdexcept to handle endge cases.
void Course::enroll_student(const Student &student) {
    if (num_students >= max_students)
        throw range_error("number of students exceeds maximum student capacity");
    students[num_students] = student;  // Insert new student
    num_students++;                    // Increment student counter
}

// ===== END TODO ===== //


void Course::set_class_number(int num) { 
    class_num = num;
}

void Course::set_professor_cwid(int id) {
    professor_cwid = id;
}

int Course::get_class_number() const {
    return class_num;
}

size_t Course::get_max_students() const {
    return max_students;
}

size_t Course::get_num_students() const {
    return num_students;
}

int Course::get_professor_cwid() const {
    return professor_cwid;
}

