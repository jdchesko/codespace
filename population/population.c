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
       float growthrate = 1.0+(1.0/3.0-1.0/4.0);
       printf("growth rate is %f\n",growthrate);
       do
       {
        populationNow = populationNow*growthrate;
        Years++;
       }
       while (populationNow < endsize);
    // TODO: Print number of years
    printf("total years to grow from %i to %i is %i\n",startsize, endsize, Years);
}
