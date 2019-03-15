#include <iostream>
using namespace std;

class Student{
    private:
        const char *m_name;
        int m_age;
        float m_score;
    public:
        //声明构造函数
        Student(const char *name, int age, float score);
        //声明普通成员函数
        void show();
};

//定义构造函数
Student::Student(const char *name, int age, float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}
//定义普通成员函数
void Student::show() {
    cout << m_name << "的年龄是" << m_age << "成绩是" << m_score << endl;
}

int main() {
    const char *name = "小明";
    Student stu(name, 15, 92.5f);
    stu.show();
    Student *pstu = new Student(name, 16, 98);
    pstu->show();
    return 0;
}
