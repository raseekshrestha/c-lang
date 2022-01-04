#include <stdio.h>

// q.n.1 store biodata of 100 

// struct student{
//     char name[30],roll[10],address[50],dob[20];
// };


// int main(){
//     struct student stud;
//     FILE *fp = fopen("students.txt","w");

//     for (int i=0;i<100;i++){
//         printf("name of student : ");
//         scanf("%s",stud.name);`
//         printf("roll: ");
//         scanf("%s",stud.roll);
//         printf("address: ");
//         scanf("%s",stud.address);
//         printf("dob: ");
//         scanf("%s",stud.dob);
//         fprintf(fp,"%s %s %s %s\n",stud.name,stud.roll,stud.address,stud.dob);

//     }

// }

// q.n.2 wap using structure of booklist and find total of 4 books
// struct booklist{
//     char title[50],author[50];
//     int cost;
// };

// int main(){
//     struct booklist list[4];
//     int total;
//     for (int i=0;i<4;i++){
//         printf("book title: ");
//         gets(list[i].title);

//         printf("book author: ");
//         gets(list[i].author);

//         printf("Cost : ");
//         scanf("%d",&list[i].cost);
//         fflush(stdin);
//         total += list[i].cost;
//     }
//     printf("total cost is %d",total);
// }


// q.n.3 wap to compute mark and percnetage of N sudents of csit 1st sem with stud name and roll using structure
// struct student{
//     char name[30];
//     int roll,total;
//     int marks[5];
//     float percent;
// };

// int main(){
//     int n;
//     printf("no of sudents: ");
//     scanf("%d",&n);
//     struct student stud[n];

//     for (int i=0;i<n;i++){
//         printf("Studnet name : ");
//         scanf("%s",stud[i].name);
//         printf("Roll: ");
//         scanf("%d",&stud[i].roll);
//         printf("marks in dl,c,phy,math,iit : ");
//         scanf("%d %d %d %d %d",&stud[i].marks[0],&stud[i].marks[1],&stud[i].marks[2],&stud[i].marks[3],&stud[i].marks[4]);
//         stud[i].total = stud[i].marks[0] + stud[i].marks[1] + stud[i].marks[2] + stud[i].marks[3] + stud[i].marks[4];
//         stud[i].percent = ((float)stud[i].total/5);
//     }
//     for (int i=0;i<n;i++){
//         printf("Name : %s\n",stud[i].name);
//         printf("\tTotal marks\t: %d\n",stud[i].total);
//         printf("\tPercentage\t: %.2f %%\n\n",stud[i].percent); 
//     }
    
// }


// q.n.4 wap to compute size of structure and union

// struct student{
//     char name[30];
//     int age;
// };
// union studnet{
//     char name[30];
//     int age;
// };

// int main(){
//     struct student std;
//     union studnet std1;
//     char name[2] = "sg";
//     std.age = 2343;
//     printf("size of structure: %d\n",sizeof(std));
//     printf("size of union    : %d\n",sizeof(std1));
// }


// q.n.5 find area and perimeter of square by passing pointer to function
// void calc(int *l){
//     printf("area is %d\n",*l * *l);
//     printf("perimeter is %d\n",*l * 4);
// }

// void main(){
//     int side=3;
//     calc(&side);
// }




// q.n.6 store marks of 100 students
// void store(char names[][30],int marks[][5]);

// int main(){
//     char names[100][30];
//     int marks[100][5];
//     for (int i=0;i<100;i++){
//         printf("names of student %d :",i+1);
//         scanf("%s",names[i]);
//         printf("mark in DL: ");
//         scanf("%d",&marks[i][0]);
//         printf("mark in CP: ");
//         scanf("%d",&marks[i][1]);
//         printf("mark in IIT: ");
//         scanf("%d",&marks[i][2]);
//         printf("mark in MAths: ");
//         scanf("%d",&marks[i][3]);
//         printf("mark in Physics: ");
//         scanf("%d",&marks[i][4]);
//     }
//     store(names,marks);
    
// }

// void store(char names[][30],int marks[][5]){
//     FILE *fp = fopen("students.txt","w");
//     for (int i=0;i<100;i++){
//         fprintf(fp,"%s\t",names[i]);
//         for (int j=0;j<5;j++){
//             fprintf(fp,"%d\t",marks[i][j]);
//             if (j==4){
//                 fprintf(fp,"\n");
//             }
//         }
//     }
// }


// q.n.7 ,wap that uses pointer to copy contents of array(int)
// void main(){
//     int arr[5] = {1,2,3,4,3},arr2[5];
//     int *ptr = &arr[0];
//     for (int i=0;i<5;i++){
//         arr2[i] = *(ptr++);
//     }

// }


// q.n.8 wap to accept numbers and sort them using pointer
// void main(){
//     int n;
//     printf("Enter value for n : ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr = &arr[0];

//     for (int i=0;i<n;i++){
//         printf("Enter number %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int temp;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             if (*(ptr+j) > *(ptr+j+1)){
//                 temp = *(ptr+j);
//                 *(ptr+j) = *(ptr+j+1);
//                 *(ptr+j+1) = temp;
//             }
//         }
//     }
//     printf("Sorted list : \n");
//     for (int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }

// q.n.9 wap to swap two number;
// void main(){
//     int a=3,b=5;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("swapped values:\n");
//     printf("a = %d\nb = %d\n",a,b);
// }


// q.n.10 wap to add tow matrix using pointer
// void main(){
//     int mat1[2][2] = {1,2,3,4};
//     int mat2[2][2] = {5,6,7,8};
//     int *p1 = &mat1[0][0],*p2 = &mat2[0][0];
//     printf("Adding two matrix using pointer:\n");
//     printf("Result : \n");
//     for (int i=0;i<4;i++){
//         printf("%d\t",*(p1+i) + *(p2+i));
//         if (i==1){
//             printf("\n");
//         }
//     }
// }

// q.n.11 wap to take n int input and store odd and even numbers in separate file
// void main(){
//     int n,ip;
//     printf("Enter value for n: ");
//     scanf("%d",&n);
//     FILE *even = fopen("even.txt","w");
//     FILE *odd = fopen("odd.txt","w");

//     for (int i=0;i<n;i++){
//         printf("Enter number %d: ",i+1);
//         scanf("%d",&ip);
//         if (ip%2==0){
//             fprintf(even,"%d\n",ip);
//         }
//         else{
//             fprintf(odd,"%d\n",ip);
//         }
//     }
//     fclose(even);
//     fclose(odd);
// }

// q.n.12 wap to count no of character in a file
// void main(){
//     int counter;
//     // char ch;
//     FILE *fp = fopen("students.txt","r");
//     while (!feof(fp)){
//         fgetc(fp);
//         counter++;
//     }
//     printf("Number of character in file is %d\n",counter);
// }

// q.n.13 wap to plot a pointer on the monitor
// #include <graphics.h>
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    putpixel(20,20,red);
    getch();
    closegraph();
}

// q.n.14 wap to draw a line
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    line(100,100,200,200);
    getch();
    closegraph();
}

// q.n.15 wap to draw an arc
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    // arc(x, y, start_angle, end_angle, radius);
    arc(100, 100, 30, 30, 100);
    getch();
    closegraph();

}


// q.n.16 draw an eclipse
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    // ellipse(x, y, start_angle, end_angle, x_rad, y_rad);
    ellipse(100, 100, 20, 30, 50, 60);
    getch();
    closegraph();

}

// q.n.17 wap to draw circle
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    // circle(x,y,radius);
    circle(100, 100, 100);
    getch();
    closegraph();

}

// q.n.18 wap to draw a rectangle
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    // rectancle(x1,y1,x2,y2);
    rectangle(100, 100, 200,200);
    getch();
    closegraph();

}


//  wap to draw a triangle
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    line(100,100,80,80);
    line(80,80,120,120);
    line(100,100,120,120);
    getch();
    closegraph();

}


// tesingh
// void main(){
//     int mat1[2][2] = {1,2,3,4};
//     int *ptr = &mat1[0][0];

//     printf("%d ",*(ptr+3));
// }