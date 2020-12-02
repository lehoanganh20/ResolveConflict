#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Pw_Check(char c[]);/*Khai bao nguyen mau ham check password*/
int main(int argc, char *argv[]) {
	char a;
    char c[200];
    int i=0;
    for(i=0;i<200;i++)
    c[i] = '\0';
    printf("Nhap vao password: ");
    fflush(stdin);
    scanf("%s",c);
    Pw_Check(c);
    return 0;
}
void Day()
{
	printf("Day");
}
void Pw_Check(char c[])
{
    int i=0;
    int j=0;
    int num=0;
    int add1=0;
    int add2=0;
    int add3=0;
    int add4=0;
    if(strlen(c)>=8)/*Check array length*/
    for(i=0;i<strlen(c);i++)
    {
        if(((c[i]<=38&&c[i]>=35)||c[i]==33||c[i]==94||c[i]==64||c[i]==42||c[i]==43||c[i]==45)&&add1==0)
        {
            num++;
            add1=1;
        }/*Check special symbol in array*/
        if(c[i]<=90&&c[i]>=65&&add2==0)
        {
            num++;
            add2=1;
        }/*Check Uppercase in array*/
        if(c[i]<=122&&c[i]>=97&&add3==0)
        {
            num++;
            add3=1;
        }/*Check Lowercase in array*/
        if(c[i]<=57&&c[i]>=48&&add4==0)
        {
            num++;
            add4=1;
        }/*Check number in array*/
    }
    if(num<3)
    {
        printf("password khong hop le");
    }else
    printf("password hop le");
}
