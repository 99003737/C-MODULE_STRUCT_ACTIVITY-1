#include <stdio.h>
#include <stdlib.h>
struct boxes
{

    int id;
    float length, beradth, height, weight;
    char color[30];
};

int main()
{
    struct boxes *ptr;
    char *pt;
    float volume =0.0 , average_volume;
    int number ,no_of_boxes,choice,i,chars;
    printf("enter the number of boxes\n");
    scanf("%d",&no_of_boxes);
    ptr =(struct boxes *)malloc(no_of_boxes * sizeof(struct boxes));

    //printf("total number of boxes is %d\n", no_of_boxes);

    pt=(char *)malloc((chars+1)*sizeof(char));

    for(i=0;i<no_of_boxes;i++)
    {
        printf("enter the box id that you want to find\n");
        scanf("%s", pt);
        
       // printf("box id that you have enter is %s\n", pt);

    }

    /*for(number=0;number<no_of_boxes;number++)
    {
        printf("numbr of boxes %d")
    }*/
}
int search(struct box *b2,int x,int search_id);
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(search_id ==b2->uniue_id)
        {
            printf("weight=%f", b2->weight);
            printf("length=%f", b2->weight);
            printf("beradth=%f", b2->weight);
            printf("height=%f", b2->weight);
            
        }
        else
        {
            printf("given id is not found",search_id)
        }
    }
}

