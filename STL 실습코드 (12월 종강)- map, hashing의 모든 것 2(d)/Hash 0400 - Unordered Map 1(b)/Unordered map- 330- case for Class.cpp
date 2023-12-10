#include <bits/stdc++.h>
#include <unordered_map>

class Student {
  public:
    Student(int kor, int eng, int math) : m_kor(kor), m_eng(eng), m_math(math) {
        m_avg = (m_kor + m_eng + m_math) / 3;
    }
    bool operator<(const Student& other) const { // const꼭 붙여야한다.
        return this->m_avg > other.m_avg; // 내림차순
    }
    bool operator==(const Student& other) const // const꼭 붙여야한다.
    {
        // key충돌의 기준은 m_kor
        if (other.m_kor == this->m_kor)
            return true;
        return false;
    }
  public:
    int m_kor;
    int m_eng;
    int m_math;
    int m_avg;
};

// C++표준 클래스(구조체)를 특수화 하기위해 namespace std안에서 해주어야 함.
namespace std {
//템플릿 특수화 사용
//hash<사용자 정의 자료형> 규칙을 맞춰야 한다.
template <>
struct hash<Student> {
    // ()연산자 오버로딩.
    size_t operator()(const Student& student) const { // const 는 꼭 붙여야 한다.
        // 매우 간단한 해시 함수.
        return student.m_avg - student.m_avg - 1;
    }
};
}


int main() {
    // 기본적인 생성 방법.
    std::unordered_map<Student, int> uMap2;

    std::pair<std::unordered_map<Student, int>::iterator, bool> iter3 =
        uMap2.insert(std::make_pair(Student(10, 20, 30), 10));

    return 0;
}
