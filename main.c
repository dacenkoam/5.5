#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int sum(){
    int a;
    scanf("%d",&a);
    if (a==-1)
    return 0;
    else return a+sum();
}

int main()
{
    setlocale(LC_ALL,"Rus");
    printf("������� ������������������ �����, -1 - ����� ������������������\n");
    int s=sum();
    printf("����� �����: %d",s) ;
    return 0;
}
