#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[150];
    int i,j,k,count;

    int n = strlen(str);

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        str[i] = tolower(str[i]);
        count = 1;

        for(j=i+1; str[j]!='\0'; j++){

            if(str[i] == str[j]){
                count++;
                str[j] = '0';
            }
        }
        if(str[i]!='0' && str[i] != ' '){
            printf("The frequency of the %c is: %d \n",str[i],count);  
        }
        
    }
}