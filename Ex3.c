#include<stdio.h>
int chenge(const int a, int b, unsigned char buf1[] )
{

    unsigned char buf[1024];

    b += 2;
    printf("chenge: b = %d// \n", b);

    printf("chenge: sizeof(buf) = %ld //\n", sizeof(buf));
    printf("chenge: sizeof(buf1) = %ld //\n", sizeof(buf1));
    return 0;
}

int main()  
{ 
    int inta;
    long longa;

    unsigned char buf1[1024];
    int a=0, b=3;
    printf("main: before b= %d //\n", b);

    printf("main: sizeof(buf1)= %ld// \n", sizeof(buf1));
    chenge(a,b,buf1);
    printf("main: after b= %d// \n", b);
    printf("\n\n sizeof(int)= %ld , sizeof(long)= %ld// \n", sizeof(inta), sizeof(longa) );

}  