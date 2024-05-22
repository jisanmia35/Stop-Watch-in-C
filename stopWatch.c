#include<stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
    int hour, minute, secound;
    hour = minute = secound = 0;
    printf("Enter the hours and munites:\n");
    int h, m;
    scanf("%d%d", &h, &m);

    while(1){
        system("cls");
        printf("%02d : %02d : %02d\n", hour, minute, secound);

        fflush(stdout);

        secound++;
        if(secound == 60){
            minute++;
            secound = 0;
        }
        if(minute == 60){
             hour++;
             minute = 0;
        }
        if(hour == 24){
            hour = 0;
        }
        sleep(1);

        if(hour == h && minute == m){
            break;
        }
    }

     return 0;
}
