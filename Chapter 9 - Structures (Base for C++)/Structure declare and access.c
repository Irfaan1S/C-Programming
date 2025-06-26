#include<stdio.h>
#include<string.h>

struct student{  //declare structure
  int roll;
  float cgpa;
  char name[100];
};

int main(){
   
  struct student s1;  // variable s1
  s1.roll = 1664;     //parameters
  s1.cgpa = 9.2;    
  //s1.name = "shradha";
  strcpy(s1.name,"shradha");  // shradha ko s1.name mein copy karna chahte he

  printf("student name = %s\n",s1.name);
  printf("student roll no = %d\n",s1.roll);
  printf("student cgpa = %f\n",s1.cgpa);

  return 0;
}
