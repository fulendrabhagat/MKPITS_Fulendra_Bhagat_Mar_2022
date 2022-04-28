#include<stdio.h>
#include<conio.h>

int main()
{
    char name[10];
    int i,count=0;
    
    printf("Enter string Name : ");
    
    scanf("%s",&name);
     for(i = 0; name[i]!='\0';i++)
    {
        //check each char with any vowel. 'a','e','i','o','u'.
        if( name[i] =='a'|| name[i] =='e' ||name[i] == 'i' ||name[i] == 'o' || name[i] == 'u')
        {
            //if equal increment the count
            count++;
        }
    }
    
    printf("vowel count = %d\n",count);
    
    
}
