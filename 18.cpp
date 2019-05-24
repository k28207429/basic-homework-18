#include<stdio.h> 
#include<string.h> 

int main()

{

    char s[100]; 
    int j,num[256]={0}; 
	printf("衡计瞷Ω计\n");  
    printf("块计");  
    scanf("%s",s);  
    for(j=0;j<strlen(s);j++) 
        num[(int)s[j]]++; 

    for(j=0;j<256;j++) 

        if(num[j]!=0)

            printf("才%c瞷%dΩ\n",(char)j,num[j]);

}

