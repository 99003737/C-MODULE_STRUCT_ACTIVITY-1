#include <stdio.h>
#include <stdlib.h>
struct Boxes {
    int ID;
    float length, beradth, height, weight;
    char color[30];
};

int main() 
{
    struct Boxes *ptr;
    float volume=0.0, average_volume;
    int Number, No_of_boxes, i;
    printf("Enter the number of Boxes\n ");
    scanf("%d", &No_of_boxes);

    // Memory allocation for Boxes according to user
    ptr = (struct Boxes *)malloc(No_of_boxes * sizeof(struct Boxes));
    for (Number = 0; Number < No_of_boxes; ++Number) 
    {
        printf("Enter ID, lengthg, breadth, height, weight,and color:\n");
        scanf("%d %f %f %f %f %s", &(ptr + Number)->ID, &(ptr + Number)->length, &(ptr + Number)->beradth, &(ptr + Number)->height, &(ptr + Number)->weight, &(ptr + Number)->color );

    }
  //  printf("Displaying Information:\n");
  //    for (Number = 0; Number < No_of_boxes; ++Number)
  //    {
  //         printf("%d\n %f\n %f\n %f\n %f\n %s", (ptr + Number)->ID, (ptr + Number)->length, (ptr + Number)->beradth, (ptr + Number)->height, (ptr + Number)->weight, (ptr + Number)->color );
  //      }
    for(i=0;i<No_of_boxes;++i)
     {
        volume += (ptr +i)->length*(ptr + i)->beradth*(ptr +i)->height;
     }
    average_volume=volume / No_of_boxes;
    printf("%f",average_volume);
    return 0;
}

