#include<stdio.h> 
#include<string.h> 

int main()

{

    char s[100]; 
    int j,num[256]={0}; 
	printf("��Ʀr�X�{������\n");  
    printf("��J�@�ӼƦC�G");  
    scanf("%s",s);  
    for(j=0;j<strlen(s);j++) 
        num[(int)s[j]]++; 

    for(j=0;j<256;j++) 

        if(num[j]!=0)

            printf("�r��%c�X�{%d��\n",(char)j,num[j]);

}

