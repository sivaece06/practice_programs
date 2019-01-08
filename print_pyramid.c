#include  <stdio.h>

int main(void)
{
    int no_of_rows, no_of_stars, rows, space, stars;
    
    printf("Enter the num of stars: ");
    scanf("%d", &no_of_stars);
    
    no_of_rows = no_of_stars;
    
    for(rows=1; rows<= no_of_rows; rows++) {
     
        for(space=1; space<= no_of_stars; space++)
            printf(" ");
        
        for(stars=1; stars<= rows; stars++)
            printf("* ");
        printf("\n");
        no_of_stars = no_of_stars - 1;
    }
    return 0;
}
