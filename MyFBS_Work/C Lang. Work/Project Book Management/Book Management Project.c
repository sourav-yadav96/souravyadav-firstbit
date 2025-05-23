#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    int book_id;
    char book_name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
} Book;
int count=0;
int size;
void addBook(Book*);
void displayBooks(Book*);
void searchBook(Book*);
void removeBook(Book*,int);
void updateBook(Book*,int);
void showBooksByAuthor(Book*,char*);
void showBooksByCategory(Book*,char*);
void displayTop3Books(Book*);

void main() {
 int choice;
 int b_id;
 char tempauthor[50], tempcategory[50];
 
 printf(" -----------------WELLCOME TO MY BOOK MANAGEMENT PROJECT-----------------\n");
 printf("How many Books you want to store:");
 scanf("%d",&size);
 Book* barr=(Book*)malloc(sizeof(Book)*size);
 do{
 	    printf("-----Menu for Book Management-----\n");
 	    printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Update Book\n");
        printf("4. Search Book\n");
        printf("5. Display Books\n");
        printf("6. Show Books by Author\n");
        printf("7. Show Books by Category\n");
        printf("8. Show Top 3 Books by Ratings and Price\n ");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
        	 case 1:
        	 	if(count<size){
                addBook(barr);
            } 
			    else{
            	 int n,chc;
            	 printf("----Memory Full----");
            	 printf("\n Do you want to increase memory for add more books details ?\n 1. Yes\n 2. No\n Enter your choice\n");
            	 scanf("%d",&chc);
            	 printf("How many more books details you want to add ?\n");
				 scanf("%d",&n);
				 barr=(Book*)realloc(barr,sizeof(Book)*(size+n));
				 if(barr==NULL){
				 	printf("Memory allocation Failed\n");
				 }else{
				 	printf("Memory Increases successfully\n");
				 }
				 size=size+n;
		}
                break;
             case 2:
                 printf("Enter book ID to remove: ");
                 scanf("%d", &b_id);
                 removeBook(barr,b_id);
                 break;
            case 3:
                printf("Enter book ID to update: ");
                scanf("%d", &b_id);
                updateBook(barr,b_id);
                break;
            case 4:
                searchBook(barr);
                break;
            case 5:
                displayBooks(barr);
                break;
            case 6:
                printf("Enter author name: ");
                scanf("%s", &tempauthor);
                showBooksByAuthor(barr,tempauthor);
                break;
            case 7:
                printf("Enter category: ");
                scanf("%s", &tempcategory);
                showBooksByCategory(barr,tempcategory);
                break;
            case 8:
                displayTop3Books(barr);
                break;
            case 9:
                free(barr);
                printf("Exiting the System...\n");
                return ;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }while(choice!=9);
}

void addBook(Book* bptr)
{
	
		printf("Enter Book details :");
		printf("\nEnter Book ID: ");
        scanf("%d", &bptr[count].book_id);
        fflush(stdin);
        printf("Enter Book Name: ");
        gets(bptr[count].book_name);
        fflush(stdin);
        printf("Enter Author: ");
        gets(bptr[count].author);
        fflush(stdin);
        printf("Enter Category: ");
        gets(bptr[count].category);
        fflush(stdin);
        printf("Enter Price: ");
        scanf("%f", &bptr[count].price);
        printf("Enter Rating: ");
        scanf("%f", &bptr[count].rating);
        count++;

		printf("------------Book added successfully.------------\n");
	}

void displayBooks(Book* bptr){
	if(count>=1){
	int i;
	printf("***Book List:***\n");
	for(i=0;i<count;i++){
		printf("Book %d Details :",i+1);
		printf("\n Book ID : %d",bptr[i].book_id);
		printf("\n Book Name : %s",bptr[i].book_name);
		printf("\n Book Author : %s",bptr[i].author);
		printf("\n Book Category : %s",bptr[i].category);
		printf("\n Book Price : %f",bptr[i].price);
		printf("\n Book Rating : %f",bptr[i].rating);
		printf("\n *************************\n");
}
}
    else{
    	printf(" Book not present\n");
	}
}

void searchBook(Book* bptr){
	int ch;
	printf("\n1. You want to Search by ID");
	printf("\n2. Search by Name\n");
	printf(" Enter your choice: ");
	scanf("%d",&ch);
	if(ch==1){
	    int tempb_id;
	        printf("Enter book ID you want to search: ");
            scanf("%d", &tempb_id);
	    int i;
                 for (i=0;i<count;i++) {
                 if (bptr[i].book_id == tempb_id) {
                 printf("\n---------Book found:---------\n");
                 printf("\n Book ID : %d",bptr[i].book_id);
	    	     printf("\n Book Name : %s",bptr[i].book_name);
	             printf("\n Book Author : %s",bptr[i].author);
		         printf("\n Book Category : %s",bptr[i].category);
	    	     printf("\n Book Price : %f",bptr[i].price);
	    	     printf("\n Book Rating : %f\n",bptr[i].rating);
	    	     return;
       }
   }
       printf("-------For This ID Book Not Found------\n");
}   else if(ch==2){
	    char tempb_name[30];
	        	printf("Enter book Name you want to search: ");
                gets(tempb_name);
                fflush(stdin);
	        int i;
                 for (i=0;i<count;i++) {
                 if (strcasecmp(bptr[i].book_name, tempb_name)==0) {
                 printf("\n---------Book found:---------\n");
                 printf("\n Book ID : %d",bptr[i].book_id);
	    	     printf("\n Book Name : %s",bptr[i].book_name);
	             printf("\n Book Author : %s",bptr[i].author);
		         printf("\n Book Category : %s",bptr[i].category);
	    	     printf("\n Book Price : %f",bptr[i].price);
	    	     printf("\n Book Rating : %f\n",bptr[i].rating);
	    	     return;
       }
   }
   printf("-------For This Name Book Not Found------\n");   
}
}

void removeBook(Book* bptr,int b_id) {
    int i;
    for (i=0; i<count;i++) {
        if (bptr[i].book_id == b_id) {
            for (int j = i; j <count - 1; j++) {
                bptr[j] = bptr[j + 1];
            }
            count--;
            size--;
            bptr = (Book*)realloc(bptr, size * sizeof(Book));
            printf("Book removed successfully.\n");
            return;
        }
    }
    printf("Book with ID %d not found.\n", b_id);
}

void updateBook(Book* bptr,int b_id) {
	int i;
    for (i = 0; i < count; i++) {
        if (bptr[i].book_id == b_id) {
            printf("Updating details for book ID %d\n", b_id);
            fflush(stdin);
            printf("Enter new Book Name: ");
            gets(bptr[i].book_name);
            fflush(stdin);
            printf("Enter new Author: ");
            gets(bptr[i].author);
            fflush(stdin);
            printf("Enter new Category: ");
            gets(bptr[i].category);
            fflush(stdin);
            printf("Enter new Price: ");
            scanf("%f", &bptr[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &bptr[i].rating);
            printf("Book updated successfully.\n");
            return;
        }
    }
    printf("Book with ID %d not found.\n", b_id);
}

void showBooksByAuthor(Book* bptr,char* tempauthor) {
    int found = 0;
    for (int i = 0; i<count; i++) {
        if (strcasecmp(bptr[i].author, tempauthor) == 0) {
            printf("Book ID: %d, Name: %s, Category: %s, Price: %f, Rating: %f\n",
                   bptr[i].book_id, bptr[i].book_name, bptr[i].category, bptr[i].price, bptr[i].rating);
            found = 1;
        }
    }
    if (found==0) {
        printf("No books found by author name %s.\n", tempauthor);
    }
}

void showBooksByCategory(Book* bptr,char *tempcategory) {
    int found = 0;
    for (int i = 0; i <count; i++) {
        if (strcasecmp(bptr[i].category, tempcategory) == 0) {
            printf("Book ID: %d, Name: %s, Author: %s, Price: %f, Rating: %f\n",
                   bptr[i].book_id, bptr[i].book_name, bptr[i].author, bptr[i].price, bptr[i].rating);
            found = 1;
        }
    }
    if (found==0) {
        printf("No books found in category name %s.\n", tempcategory);
    }
}




void displayTop3Books(Book* bptr) {
    if (count < 3) {
        printf("Not enough books to display top 3.\n");
        return;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (bptr[j].price < bptr[j + 1].price || (bptr[j].price == bptr[j + 1].price && bptr[j].rating < bptr[j + 1].rating)) {
                Book temp = bptr[j];
                bptr[j] = bptr[j + 1];
                bptr[j + 1] = temp;
            }
        }
    }

    printf("Top 3 Books based on Price and Rating:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book ID: %d, Name: %s, Author: %s, Category: %s, Price: %f, Rating: %f\n",
               bptr[i].book_id, bptr[i].book_name, bptr[i].author, bptr[i].category, bptr[i].price, bptr[i].rating);
    }
}
