#include <stdio.h>
#include <string.h>

struct string_set{
    char words[200];
};
 
int main(){
    int n;
    scanf("%d", &n);
    getchar();

    struct string_set word_var[n];

    for(int i = 0; i < n; i++){
        fgets(word_var[i].words, sizeof(word_var[i].words), stdin);
        word_var[i].words[strcspn(word_var[i].words, "\n")] = '\0';
    }
    // for(int i = 0; i < n; i++){
    //     printf("%d\n", strlen(word_var[i].words));
    // }

    // for(int i = 0; i < n; i++){S
    //     int len = strlen(word_var[i].words);
    //     if(len > 10){
    //         // middle letters count = len - 2
    //         printf("%c%d%c\n", word_var[i].words[0], len - 2, word_var[i].words[len - 1]);
    //     }
    //     else{
    //         printf("%s\n", word_var[i].words);
    //     }
    // } -- RIGHT LOGIC

    for(int i = 0; i < n; i++){
        if(strlen(word_var[i].words) > 10){
            printf("%c%d%c\n", word_var[i].words[0], strlen(word_var[i].words) - 2, word_var[i].words[strlen(word_var[i].words) - 1]);
        }
        else{
            printf("%s\n", word_var[i].words);
        }
    }
    return 0;
}