#include <iostream>
using namespace std;

class Student {
    private:
        const char *m_name;
        int m_age;
        float m_score;

    public:
        void setname(const char *name);
        void setage(int age);
        void setscore(float score);
        void show();
};

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
    cout << m_name<<"的年龄是"<<m_age<<"成绩是"<<m_score<<endl;
}

int main() {
    Student stu;
    const char *a = "小明";
    stu.setname(a);
    stu.setage(15);
    stu.setscore(95);
    stu.show();

    Student *pstu = new Student;
    char b[] = "小华";
    pstu->setname(b);
    pstu->setage(16);
    pstu->setscore(98);
    pstu->show();

    return 0;
}
