#include <stdio.h>
#include <string.h>

int main(){
    char num[16];
    int result = 0;
    int dial;
    scanf("%s", num);

    for(int i = 0; i < strlen(num); i++){
        if(num[i] == 'A' || num[i] == 'B' || num[i] == 'C'){
            dial = 2;
        }
        else if(num[i] == 'D' || num[i] == 'E' || num[i] == 'F'){
            dial = 3;
        }
        else if(num[i] == 'G' || num[i] == 'H' || num[i] == 'I'){
            dial = 4;
        }
        else if(num[i] == 'J' || num[i] == 'K' || num[i] == 'L'){
            dial = 5;
        }
        if(num[i] == 'M' || num[i] == 'N' || num[i] == 'O'){
            dial = 6;
        }
        else if(num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S'){
            dial = 7;
        }
        else if(num[i] == 'T' || num[i] == 'U' || num[i] == 'V'){
            dial = 8;
        }
        else if(num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z'){
            dial = 9;
        }



        result += dial + 1;
    }

    printf("%d", result);
}