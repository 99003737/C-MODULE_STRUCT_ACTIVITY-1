#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Boxes {
    int ID;
    float length, beradth, height, weight;
    char color[30];
};

int main() 
{
    struct Boxes *ptr;
    float volume=0.0, average_volume,difference;
    int Number, No_of_boxes, i;
    int min=0,max=0;
    printf("Enter the number of Boxes\n ");
    scanf("%d", &No_of_boxes);
    int arr[No_of_boxes],box_average=0;
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
        volume = (ptr +i)->length*(ptr + i)->beradth*(ptr +i)->height;
        arr[i]=volume;
        printf("%d\n",arr[i]);
        box_average+=volume;
     }
    average_volume=box_average / No_of_boxes;
    printf("%f\n",average_volume);
    for(i=0;i<No_of_boxes;i++)
    {
        min=max=arr[0];
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
        difference=max-min;
        printf("%f",difference);
    return 0;
}
