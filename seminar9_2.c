#include <stdio.h>
#define SIZE 3

int sum(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
}

void swap(int*a,int*b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

float scalar(float*arrA,float*arrB,int len)
{
    float result = 0;
    for(int i=0;i<len;i++)
        //~ result += arrA[i]*arrB[i];
        result += *(arrA+i) * *(arrB+i);
    return result;
}
int main(void)
{
    int a[5] = {10,20,30,40,50};
    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    int *pa, n;
    pa = a;
    //    n = *pa+2;//12
    n = *(pa+2);//30=a[2]
    printf("n = %d\n", n);
    int *qa;
    pa = &a[1];//pa = a + 1;
    qa = &a[3];//qa = a + 3;
    //pa-qa=2;
    printf("%lld\n", (int*)qa-(int*)pa);
    printf("%lld\n", pa-qa);
    char *pc = (char*)pa;
    char *qc = (char*)qa;
    printf("%lld\n", (char*)qc-(char*)pc);
    n=10;
    pa = a+2;//&a[2];
    *(pa++) = n+3;//n+3=13;//pa=&a[3],a[2]=13;
    //~ *(++pa) = n+3;//n+3=13;//pa=&a[3],a[3]=13;
    printf("%d\n",*pa);//a[3]=40
    printf("%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
    int a1[5] = {10,20,30,40,50};
    printf("%d\n",sum(a1,5));
    printf("%d\n",sum(a1,2));
    printf("%d\n",sum(a1+2,3));
    int a2[5] = {10,20,30,40,50};
    int *pa2, n2=10;
    pa2 = a2+2;
    n2 = ++(*pa2); // ++(*pa)
    printf("%d\n",n2);
    swap(&a[0],&a[3]);
    printf("%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
    swap(a+0,a+3);
    printf("%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
    float arrA[SIZE]={1,2,3};
    float arrB[SIZE]={1,2,3};
    printf("%f",scalar(arrA,arrB,SIZE));
    return 0;
}

