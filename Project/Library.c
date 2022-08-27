/*//Library Management System in C

#include <stdio.h>
#include <conio.h>
 
//Book Structure
 
typedef struct Book
{
    char title[20];
    char author[20];
    int page;
    float price;
}Book;

Book *book;          //Global book type pointer
int count =0;       //Global count variable
int size;          //Global variable for dynamic memory alloacation

//Function to add new book

void addbook()
{
    system("cls");
    system("color 41");
    printf("\n ****** Add new book detail ****** ");
    printf("\n Enter Book Title : ");
    gets(book[count].title);
    printf("\n Enter Book Author : ");
    fflush(stdin);
    gets(book[count].author);
    printf("\n Enter Book Price : ");
    scanf("%f",&book[count].price);
    printf("\n Enter Book Page : ");
    scanf("%d",&book[count].page);
    count++;
}

// Function to show all books record

void showAllBook()
{
    int i;
    system("cls");
    system("color 71");
    printf("\n\n\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Books Details @@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n\n\t\t----------------------------------------------------------------------------");
    printf("\n\t\tBOOK TITLE\t\tBOOK AUTHOR\t\tBOOK PRICE\t\tBOOK PAGE");
    printf("\n\t\t----------------------------------------------------");
    for(i=0;i<count;i++)
    {
        printf("\n\t\t%s",book[i].title);
        printf("\t\t\t%s",book[i].author);
        printf("\t\t\t%f",book[i].price);
        printf("\t\t%d",book[i].page);
    }
}

//Function to search book by title

void searchBook()
{
    char btitle[10];
    int i;
    printf("\nEnter book title to be searched: ");
    gets(btitle);
        for(i=0;i<count;i++)
        {
            if(stricmp(book[i].title,btitle)==0)
            {
                system("cls");
                printf("\n\n\t\t ######### Book Details #########");
                printf("\n\n\t\tBook Title   :   %s",book[i].title);
                printf("\n\t\tBook Author    :   %s",book[i].author);
                printf("\n\t\tBook Price     :   %f",book[i].price);
                printf("\n\t\tBook Page      :   %d\n",book[i].page);
                }
        }
        
        
}
























