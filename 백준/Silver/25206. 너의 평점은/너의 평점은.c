#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    char score[2];
    float num;
    float a;
    float total = 0.0;
    float numtotal = 0.0;
    

    for(int i = 0; i<20; i++){
        scanf("%s %f %s", name, &num, score);

        if(score[0] != 'P'){

            if(score[0] == 'A') a = 4.0;
            else if(score[0] == 'B') a = 3.0;
            else if(score[0] == 'C') a = 2.0;
            else if(score[0] == 'D') a = 1.0;
            else if(score[0] == 'F') a = 0.0;

            if(score[1] == '+') a += 0.5;

            total += num * a;
            numtotal += num;
        }

        for(int j = 0; j<strlen(name); j++){
            name[j] = 0;
        }

        score[0] = 0;
        score[1] = 0;
        num = 0;
    }
    printf("%f", total/numtotal);
}