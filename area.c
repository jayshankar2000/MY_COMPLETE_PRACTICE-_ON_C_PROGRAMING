 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     float r,area;
     int i;
     i=1;
     while(i<=10)
     {
        printf("\n Enter the radius: ");
        scanf("\n%f",&r);
        area=3.14*r*r;
        printf("area is %f",area);
        i++ ;
     }

 }
