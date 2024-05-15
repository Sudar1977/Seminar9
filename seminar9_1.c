#include <stdio.h>


int main(void)
{
    char s1[100]="", s2[100]="";
    int r;
    //~ scanf("%s%s",s1,s2);//Hello world
    r = scanf("%[0-9]=%[a-z]", s1, s2);//123=hello
    printf("s1 = %s s2 = %s\n",s1,s2);//123=hello//123=123//hello=123//seminar9_1.exe < emty.txt
    printf("r = %d\n",r);
    return 0;
}

