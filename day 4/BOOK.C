#include <stdio.h>

struct Fiction_t {
    char title[250];
    char author[125];
    float price;
};
typedef struct Fiction_t Fiction;

struct NonFiction_t {
    char title[250];
    char author[500]; // Changed from subject to author
    float price;
};
typedef struct NonFiction_t NonFiction;

union BookType_t {
    Fiction fiction;
    NonFiction nonFiction;
};
typedef union BookType_t BookType;

struct Book_t {
    int type;
    BookType booktype;
};
typedef struct Book_t Book;

Book books[1000];
int bookCount;

void readBooks();
void displayBooks(); // Corrected function name

int main() {
    readBooks();
    displayBooks();
    return 0;
}

void readBooks() {
    printf("Enter number of books: ");
    scanf("%d", &bookCount);

    for (int i = 0; i < bookCount; i++) {
        printf("Type of book (1-fiction 2-nonfiction): ");
        scanf("%d", &books[i].type);
        switch (books[i].type) {
            case 1: {
                printf("Enter fiction book details (title, author, price): ");
                scanf("%249s %124s %f", books[i].booktype.fiction.title, books[i].booktype.fiction.author, &books[i].booktype.fiction.price);
            } break;
            case 2: {
                printf("Enter nonfiction book details (title, author, price): ");
                scanf("%249s %499s %f", books[i].booktype.nonFiction.title, books[i].booktype.nonFiction.author, &books[i].booktype.nonFiction.price);
            } break;
            default:
                printf("Invalid book type.\n");
                i--; // Decrement i to repeat this iteration
                break;
        }
    }
}

void displayBooks() {
    for (int i = 0; i < bookCount; i++) {
        switch (books[i].type) {
            case 1: {
                printf("Fiction book: %s, Author: %s, Price: $%.2f\n", books[i].booktype.fiction.title, books[i].booktype.fiction.author, books[i].booktype.fiction.price);
            } break;
            case 2: {
                printf("Nonfiction book: %s, Author: %s, Price: $%.2f\n", books[i].booktype.nonFiction.title, books[i].booktype.nonFiction.author, books[i].booktype.nonFiction.price);
            } break;
            default:
                printf("Invalid book type.\n");
                break;
        }
    }
}