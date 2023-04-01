#include<stdio.h>
#include<ctype.h>
#include<strings.h>

int main() {
    char String[100];
    int i,vowel=0,cons=0,digits=0,specials=0;

    printf("Enter a word/string:\n");
    gets(String);

    for(i=0; String[i]!='\0';++i){
        String[i] = tolower(String[i]);

        if(String[i] == 'a' || String[i] == 'e' || String[i] == 'i' ||
        String[i] == 'o' || String[i] == 'u'){
            ++vowel;
        }
        else if((String[i]>='a' && String[i]<='z')){
            ++cons;
        }
        else if((String[i]>='0' && String[i]<='9')){
            ++digits;
        }
        else{
            ++specials;
        }
    }

    printf("No. of Alphabets: %d\n", vowel+cons);
    printf("No. of Digits: %d\n", digits);
    printf("No. of Special Characters: %d\n", specials);


    return 0;
}