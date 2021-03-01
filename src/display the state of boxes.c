
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
struct boxes{
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[50];
    int weight;

} ;
int main()
{
     struct boxes *ptr;
    *int number,no_of_boxes;
    printf("Enter the number of boxes: ");
    scanf("%d", &no_of_boxes);

     Memory allocation for noOfboxex structures
    ptr = (struct boxes *)malloc(no_of_boxes * sizeof(struct boxes));
    for (number = 0; number < no_of_boxes; number++) {
        printf("Enter the name of the subject and marks respectively:\n");
        scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);


        int no_of_boxes, option, currentbox=0,temp,x,i,k;
        printf("ENTER THE NUMBER OF BOXES : ");
        scanf("%d",&no_of_boxes);
        struct boxes box [no_of_boxes];
        while(x=true)

        {
             printf("1.ENTER THE BOX NUMBER : \n 2.DISPLAY THE STATE OF ALL BOXES ");
             scanf("%d",&currentbox);
             scanf("%d",&option);
             switch(option)
             {
                 case 1:
                 if(currentbox<=no_of_boxes)
                 {
                   
                    printf("ENTER THE UNIQUE_ID : ");
                    scanf("%d",&box[currentbox].unique_id);
                    printf("ENTER THE LENGTH : ");
                    scanf("%d",&box[currentbox].length);
                    printf("ENTER THE BREADTH : ");
                    scanf("%d",&box[currentbox].breadth);
                    printf("ENTER THE HEIGHT : ");
                    scanf("%d",&box[currentbox].height);
                    printf("ENTER THE COLOUR : ");
                    scanf("%s",&box[currentbox].colour);
                    printf("ENTER THE WEIGHT : ");
                    scanf("%d",&box[currentbox].weight);
                 }
                 else{
                     printf("BOX IS FULL");
                 }break;
                 case 2:
                 i=currentbox;
                 //for( i=0; i<currentbox;i++);
                 {
                 printf("box id : %d\n", box[i].unique_id);
                 printf("enter box length : %d\n", box[i].length);
                 printf("enter box breadth : %d\n", box[i].breadth);
                 printf("enter box height : %d\n", box[i].height);
                 printf("enter box colour : %s\n", box[i].colour);
                 printf("enter box weight : %d\n", box[i].weight);
                 }
                 break;
                 case 3:
                 scanf("%d",&k);
                 printf("%d",box[k].unique_id);
             }
        } return 0;
}












