#include<iostream>
using namespace std;

int func2(int arr[], int n){
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(arr[i] + arr[j] == 100) return 1;
    }
  }

  return 0;
}

int main(){
  int arr[] = {50,42};
  cout << func2(arr,2) << endl;
} 

/*
����)
�־��� ���� N�� int�迭 arr�� ���� 100�� ��� �ٸ� ��ġ�� �� ���Ұ� �����ϸ�
1��, �������� ������ 0�� ��ȯ�ϴ� �Լ� func2(int arr[], int n)�� �ۼ��϶�.

�� �ڵ�� O(N^2)�� �ð� ���⵵�� ������.
(n-1) + (n-2) + ... + 3 + 2 + 1 = (N^2 - N) / 2 => O(N^2)

������ ������ �� ������ O(n)�� �ð����⵵�� �������� ���� �����ϴ�!
*/