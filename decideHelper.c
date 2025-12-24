#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char* argv[]){
    srand(time(NULL));
    if(argc<2){
        printf("Type something");
    }
    if(strcmp(argv[1],"coin") == 0){
        int n = (rand() % 2);
        if(n == 1){
            printf("Tail!!\n");
        }
        else
        printf("Head!!\n");
        return 0;
    }
    if(strcmp(argv[1],"wheel") == 0){
        printf("Type number od choice first then name of each choice.");
        int max;
        printf("How many choice? (number): ");
        scanf("%d",&max);
        char wheel[max][100];
        for(int i=0; i<max; i++){
            printf("choice : ");
            scanf("%s",wheel[i]);
        }
        int m = (rand() % max);
        printf("Your result is: %s\n",wheel[m]);
        return 0;
    }
    if((strcmp(argv[1],"coin") != 0) && (strcmp(argv[1],"wheel") != 0)){
        printf("We can't do that");
    }
    return 0;
}