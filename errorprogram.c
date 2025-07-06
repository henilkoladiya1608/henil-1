//power calculator with the math error by computer 

#include<stdio.h>
#include<math.h>

int main(){
    int a,b; //here i consumed 2 integer a,b
    
    printf("enter the value of a :");
    scanf("%d", &a);             //here i print "a" with user output

    printf("enter the value of b :");
    scanf("%d", &b);             //here i print "b" with user output

 int power = pow(a,b);           //here i use pow function 
 printf("%d", power);            //here i print power int
 return 0;
}
// use a = 5 and b = 2 as per math logic it's answer should be 25 but here you see the answer is 24 
//but when you use other number like a=3 and b=2 then shows the right answer = 9;
//how it's possible...!!!