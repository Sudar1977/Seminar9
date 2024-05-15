#include <stdio.h>

int main(void)
{
    int matr[3][2];
    int *pm;
    //~ int (*pm)[2];
    pm = matr[0];//теряется информация о размере строки.

    *(pm+3) = 123;
    printf("%d\n",matr[1][1]);
    pm[3] = 1234;
    printf("%d\n",matr[1][1]);

    int (*pm2)[2]; //указатель на строку из 2-ух int
    //~ int *pm3[2]; //массив из 2-ух  указатель int

    pm2 = matr;
    pm2[1][1] = 123; //теперь все ок
    printf("%d\n",matr[1][1]); // 123

    int m[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *p1;
    int (*p2)[3];
    p1 = m[1];
    p2 = m + 1;
    p1++;
    p2++;
    printf ("%d %d\n", *p1, **p2);

    char *ps[] = {"one", "two", "three", NULL}; // NULL признак конца
    for(int i=0; ps[i] ; i++)
        printf("%s\n", ps[i]);

    return 0;
}

