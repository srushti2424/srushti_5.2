#include<stdio.h>
#include<conio.h>

void main(){
int a=8;
int b=3;
int c=12;
int d=7;
clrscr();
if(a>b){
  if(a>c){
    if(a>d){
      printf("a is max...");
      }else{
      printf("d is max...");
      }

}else{
 if(c>d){
  printf("c  is max...");
 }else{
 printf("d is max...");
 }
}
}else{
 if(b>c){
  if(b>d){
 printf("b is max...");
 }else{
 printf("c is max...");
 }
}else{
  if(c>d){
  printf("C is max");
  }else{
  printf("d is max");
  }
  }
}



getch();
}