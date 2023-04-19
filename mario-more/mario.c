#include <cs50.h>
#include <stdio.h>

int main(void)
{
 do
 {
    int rows = get_int("input number of rows between 1 and 8:");
 }
 while (rows <1) || (rows>8)
 for (int rowcounter=0; rowcounter < rows; rowcounter++ )
     for ( int spacecount=0; spacecount<rowcounter; spacecounter++)
     // build left pyramid then right noting symmetry
       {
        if (rowcounter<rows)
        {
         string leftpyramid[spacecount]=" "
         string rightpyramid[rowcounter-spacecount]=" "
        }
        else
        {
         string leftpyramid[spacecount]="#"
         string rightpyramid[spacecount]="#"
         }
         string leftpyramid[spacecount+1]=" "
         string rightpyramid[spacecount+1]=" "
         for ()}