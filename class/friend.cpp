#include <iostream>
using namespace std;

class Student{
    public:
        Student(const char *name, int age, float score);
    public:
        friend void show(Student *pstu);
    private:
        const char *m_name;
        int m_age;
        float m_score;
};

Student::Student(const char *name, int age, float score):m_name(name),m_age(age), m_score(score) {}

void show(Student *pstu) {
    cout << pstu->m_name << "年龄是"<<pstu->m_age<<"成绩是"<<pstu->m_score<<endl;
}

int main() {
    Student stu("小明", 15, 80.5);
    show(&stu);
    Student *pstu = new Student("李烈", 16, 90);
    show(pstu);
    return 0;
}
