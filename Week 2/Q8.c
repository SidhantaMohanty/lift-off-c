#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[50];  
    int i,vowels=0,consonants=0;
 
    printf("Enter a string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}
 	
     
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
}