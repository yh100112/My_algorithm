#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number = 7; // ����� ����
int c[7]; // �湮ó���� ���� �迭 ����
vector<int> a[8];

void bfs(int start){
  queue<int> q;
  q.push(start);
  c[start] = true;
  while(!q.empty()){
    int x = q.front(); // ť���� ���� �տ� ���� ����
    q.pop(); // ť���� ���� �տ� ���� ����
    printf("%d ",x);
    for(int i = 0; i < a[x].size(); i++){
      int y = a[x][i];
      if(!c[y]){
        q.push(y);
        c[y] = true;
      }
    }
  }
}

int main(){
  a[1].push_back(2);
  a[1].push_back(3);
  
}


