#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

const char *transformer(int hour, int minute, int second)
{
    static char result[32];

    snprintf(result, sizeof(result),"%02d:%02d:%02d", hour, minute, second);

    return result;
}

int main(void)
{
    int oleksiy_age;
    int andy_age;
    bool dowewantfor = 0;
    printf("Enter Oleksiy's age: ");
    scanf("%d", &oleksiy_age);

    printf("Enter Andy's age: ");
    scanf("%d", &andy_age);

    int total_age = oleksiy_age + andy_age;
    printf("Total age: %d\n", total_age);

    time_t raw_time = time(NULL);
    struct tm *local_time = localtime(&raw_time);
    

    int hour = local_time->tm_hour;
    int minute = local_time->tm_min;
    int second = local_time->tm_sec;
    while(!dowewantfor){
        sleep(1);
        if(second == 60){
            second = 0;
            minute += 1;
        } else if(minute == 60){
            minute = 0;
            hour += 1;
        } else if(hour == 24){
            hour = 0;
            minute = 0;
            second = 0;
        }
        printf("Time: %s\n", transformer(hour, minute, second));
        second += 1;
    }
    
    if(dowewantfor){
        // if we want to stop after 60 seconds 
        for(int i = 0; i <= 60; i++){
            sleep(1);
            second += 1;
            if(second == 60){
                second = 0;
                minute += 1;
            i++;
            }
        }
    }
    return 0;
}