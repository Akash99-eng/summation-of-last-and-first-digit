#include <stdio.h>
int main() {
int T; // 
scanf("%d", &T);
while(T--){

int n;
scanf("%d",&n);
int lastdigit;
lastdigit = n%10;

int firstdigit;
while(n>=10){

n= n/10; 
firstdigit =n;
} 

int sum;
sum=lastdigit+firstdigit;
printf("%d\n",sum );








}

    return 0;
}
