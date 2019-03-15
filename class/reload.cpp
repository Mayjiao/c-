#include <iostream>
using namespace std;

class Student{
    private:
        const char *m_name;
        int m_age;
        float m_score;
    public:
        Student();
        Student(const char *name, int age, float score);
        void setname(const char *name);
        void setage(int age);
        void setscore(float score);
        void show();
};

Student::Student() {
    m_name = NULL;
    m_age = 0;
    m_score = 0.0;
}
Student::Student(const char*name, int age, float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}
void Student::setname(const char *name) {
    m_name = name;
}
void Student::setage(int age) {
    m_age = age;
}
void Student::setscore(float score) {
    m_score = score;
}
void Student::show() {
    if (m_name == NULL || m_age <=0) {
        cout << "成员变量未初始化"<<endl;
    } else {
        cout << m_name << "的年龄是" << m_age << "成绩是" << m_score << endl;
    }
}

int main() {
    const char *name="小明";
    Student stu(name, 15,55);
    stu.show();

    Student *pstu = new Student();
    pstu->show();
    pstu->setname(name);
    pstu->setage(17);
    pstu->setscore(99);
    pstu->show();

    return 0;
}

