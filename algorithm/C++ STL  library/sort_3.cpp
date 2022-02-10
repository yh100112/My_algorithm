// ! �ǹ����� ������ sort()�� ����ϴ� ���

#include<iostream>
#include<algorithm>

using namespace std;

class Student{
public:
  string name;
  int score;
  Student(string name, int score){
    this->name = name;
    this->score = score; 
  }

  //���� ���� : ������ ���� ����
  // �ٸ� �л�(student)�� ���� �� �� ����(this->score)�� �� ���ٸ�
  // �켱������ ���ٶ�� �� => ������ ���� �������� ����ϰڴٴ� ����
  bool operator < (Student& student){
    return this->score < student.score;
  }

};

int main(){
  Student students[] = {
    Student("������", 90),
    Student("�̻��", 93),
    Student("���ѿ�", 97),
    Student("������", 87),
    Student("������", 92)
  };
  sort(students,students + 5); // Ŭ���� ������ ������ ������� ������ �̷��� ���۰��� ������ ���ָ� ��
  for(int i = 0; i < 5; i++){
    cout << students[i].name << " ";
  }
}