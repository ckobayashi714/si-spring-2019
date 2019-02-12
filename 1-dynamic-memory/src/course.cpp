
#include "course.h"
#include "student.h"
#include <stdexcept>

using namespace std;

// ===== TODO ===== //

// Initialize member variables.
// By default, course will hold a max of 25 students.
Course::Course() {

}

// Very similar to default constructor, but parameter specifies max
// number of students.
Course::Course(size_t max) {

}

// Utilized to free allocated memory.
Course::~Course() {

}

// Fetch student at specified index.
// Utilize stdexcept to handle edge cases.
Student Course::get_student(size_t index) const {
    return students[index];
}

// Insert a new student
// Utilize stdexcept to handle endge cases.
void Course::enroll_student(const Student &student) {

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

