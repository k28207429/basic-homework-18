#include<stdio.h> 
#include<string.h> 

int main()

{

    char s[100]; 
    int j,num[256]={0}; 
	printf("算數字出現的次數\n");  
    printf("輸入一個數列：");  
    scanf("%s",s);  
    for(j=0;j<strlen(s);j++) 
        num[(int)s[j]]++; 

    for(j=0;j<256;j++) 

        if(num[j]!=0)

            printf("字符%c出現%d次\n",(char)j,num[j]);

}

