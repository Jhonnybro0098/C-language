#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];//character array
    int i,totChar;//variable  declaration
totChar=0;//variable initialization
    printf("Please enter the string for count words\n");
    gets(str);//get and store string from user

    for(i=0; str[i] != '\0'; i++){
        if(str[i]!=' ')// this condition is used to avoid counting space
        {
            totChar++;//totChar=totChar+1
        }
    }
    printf("The total characters of the given string= %d",totChar);
    getch();//display total characters of the string
    return 0;
}