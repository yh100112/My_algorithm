#include<iostream>
#include<malloc.h>
using namespace std;

int main(){
  int *point = new int[5]; // �迭 ���� �޸� �����Ҵ�

  for(int i=0; i<5; i++){
    point[i] = i;
  }

  cout << sizeof(point) << endl; // 8����Ʈ
  cout << sizeof(*point) <<endl; // 4����Ʈ
  delete[] point; // �迭 ���� �޸� �Ҵ�����

  return 0;
}