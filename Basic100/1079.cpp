#include<stdio.h>

int main(){
  int input;
  int sum = 0;
  int cnt = 1;
  scanf("%d",&input);

  while(true){
    sum += cnt;
    
    if(sum >= input) break;
    cnt++;
  }
  printf("%d\n",cnt);
}