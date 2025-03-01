
// check given charactor is vowel or consonants (using only  single if).

#include<stdio.h>
void main(){
    char a;
    printf("Enter the value of a ");
    scanf("%c",&a);
    if(a =='a'|| a =='e'||a == 'i'||a == 'o'||a == 'u'||a == 'A'||a == 'E'||a == 'I'||a == 'O'||a == 'U'){
        printf(" %c  vowel",a);
    } else if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
      printf(" %c  consonant",a);
    } else {
        printf("%c not a alphabet",a);
    }
}