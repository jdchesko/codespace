#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
     int startsize;
     do
     {
        startsize = get_int("input starting size, a positive integer");
     }
     while (startsize < 9);
    // TODO: Prompt for end size
     int endsize;
     do
     {
        endsize = get_int("input ending size:");
     }
     while (endsize < 10);
    // TODO: Calculate number of years until we reach threshold
       int populationNow=startsize;
       int Years =0;
       do
       {
        populationNow= populationNow*float(1/3-1/4);
        Years++;
       }
       while (populationNow < endsize);
    // TODO: Print number of years
    printf("total years to grow from %i to %i is %i\n",startsize, endsize, Years)
}
