#include <iostream>
using namespace std;

class Student{
    private:
        const char *m_name;
        int m_age;
        float m_score;
    public:
        Student(const char *name, int age, float score);
        void show();
};

//采用初始化列表
Student::Student(const char *name, int age, float score):m_name(name),m_age(age),m_score(score) {
   //do nothing
}
void Student::show(){
    cout <<m_name<<"年龄是"<<m_age<<"成绩是"<<m_score<<endl;
}

int main() {
    const char *name = "小明";
    Student stu(name, 15, 95);
    stu.show();
    Student *pstu = new Student(name, 19,96);
    pstu->show();
    return 0;
}
   
