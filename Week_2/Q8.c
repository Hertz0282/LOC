#include<stdio.h>
#include<ctype.h>
#include<strings.h>

int main() {
    char String[150];
    int i,vowel=0,cons=0;

    printf("Enter a word/string:\n");
    gets(String);

    for(i=0; String[i]!='\0';++i){
        String[i] = tolower(String[i]);

        if(String[i] == 'a' || String[i] == 'e' || String[i] == 'i' ||
        String[i] == 'o' || String[i] == 'u'){
            ++vowel;
        }
        else{
            ++cons;
        }
    }

    printf("No. of Vowels: %d\n", vowel);
    printf("No. of Consonant: %d", cons);


    return 0;
}