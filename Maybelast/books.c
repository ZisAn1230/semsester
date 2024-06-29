// #include<stdio.h>
// #include<string.h>

// struct Books
// {
//     char title[50];
//     char author_name[50];
//     char books_name[100];
//     int id;
// };

// int main()
// {
//     struct Books books1;
//     strcpy(books1.title,"C programming");
//     strcpy(books1.author_name,"Nuha Ali");
//     strcpy(books1.books_name,"Teach Yourself");
//     books1.id=548346745;

//     printf("Book 1 Title: %s\n",books1.title);
//     printf("Book 1 Author: %s\n",books1.author_name);
//     printf("Book 1 Subject: %s\n",books1.books_name);
//     printf("Book 1 Id: %d\n",books1.id);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

// Define the structure
struct student {
    char name[50];
    int roll;
    char mob[15];
    float gpa;
};

int main() {
    // Declare and initialize a student variable
    struct student s1;

    // Assign data to the structure members
    strcpy(s1.name, "John Doe");
    s1.roll = 101;
    strcpy(s1.mob, "123-456-7890");
    s1.gpa = 3.75;

    // Print the data
    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Mobile Number: %s\n", s1.mob);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
