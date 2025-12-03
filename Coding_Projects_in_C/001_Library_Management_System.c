/*
Designing and implementing a menu-driven Library Management System in C using the knowledge of following:
File Handling, Structure, Strings, Arrays etc.

Allowing operations like:
- Login System
- Add/Delete Member
- Show All Members
- Add/Delete Book
- Show All Books
- Search Member By Name
- Search Book By Name
- Issue/Return Book
- Show Issued/Returned Books
- Quit
*/


#include <string.h>
#include <stdio.h>
#include <ctype.h>

/* --- Data structures --- */
struct date {
    int day, month, year;
};

struct member {
    int id;
    char name[30], email[30];
    long long int phone;
};

struct book {
    int id;
    char title[30], name[30];
    float cost;
};

struct transaction {
    struct member m;
    struct book b;
    struct date d;
};

/* --- Helping Lines --- */
void print_line() {
    printf("--------------------------------------------------------------------------------\n");
}

void print_empty_line() {
    printf("\n");
}

/* --- Login --- */
int login() {
    const char correct_user[] = "Devesh";
    const char correct_pass[] = "devesh@123";
    char user[20], password[20];
    int attempts = 0;

    print_empty_line();
    print_line();
    printf("                                      LOGIN MENU                                   \n");
    print_line();

    while (1) {
        printf("\nEnter username (or type 'exit' to quit): ");
        scanf("%19s", user);
        if (strcasecmp(user, "exit") == 0) {
            printf("\nExiting the system...\n");
            return 0;
        }

        printf("Enter the password: ");
        scanf("%19s", password);
        getchar();

        if (strcmp(user, correct_user) == 0 && strcmp(password, correct_pass) == 0) {
            printf("\nAccess Granted!\n");
            print_line();
            return 1;
        } else {
            attempts += 1;
            printf("\nInvalid username or password! Try again!\n");
            if (attempts >= 3) {
                printf("\nToo many failed attempts. Exiting...\n");
                return 0;
            }
        }
    }
}

/* --- Duplicate check helpers --- */
int isDuplicateMemberID(int id) {
    struct member m;
    FILE *fptr = fopen("Members.txt", "r");
    if (fptr == NULL) return 0;
    while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
        if (m.id == id) {
            fclose(fptr);
            return 1;
        }
    }
    fclose(fptr);
    return 0;
}

int isDuplicateBookID(int id) {
    struct book b;
    FILE *fptr = fopen("Books.txt", "r");
    if (fptr == NULL) return 0;
    while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
        if (b.id == id) {
            fclose(fptr);
            return 1;
        }
    }
    fclose(fptr);
    return 0;
}

/* --- Member functions --- */
void addMember() {
    struct member m;
    int n;
    print_empty_line();
    print_line();
    printf("                                 ADD MEMBER SECTION                                \n");
    print_line();

    printf("\nEnter how many members do you want to add:  ");
    scanf("%d", &n);
    getchar();

    FILE *fptr = fopen("Members.txt", "a");
    if (fptr == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    for (int i = 0; i < n; i += 1) {
        printf("\n--- Enter details for Member %d ---\n", i + 1);
        int duplicate;
        do {
            printf("Enter Member ID: ");
            scanf("%d", &m.id);
            getchar();
            duplicate = isDuplicateMemberID(m.id);
            if (duplicate) {
                printf("Member ID already exists! Try a different ID.\n");
            }
        } while (duplicate);

        printf("Enter Member's Name: ");
        fgets(m.name, sizeof(m.name), stdin);
        m.name[strcspn(m.name, "\n")] = '\0';

        printf("Enter Member's E-Mail ID: ");
        fgets(m.email, sizeof(m.email), stdin);
        m.email[strcspn(m.email, "\n")] = '\0';

        printf("Enter Member's Phone number: ");
        scanf("%lld", &m.phone);
        getchar();

        fprintf(fptr, "%d|%s|%s|%lld\n", m.id, m.name, m.email, m.phone);
        printf("\nMember %d added successfully!\n", i + 1);
        print_line();
    }
    fclose(fptr);
    print_empty_line();
}

void delMember() {
    int n, del_id;
    struct member m;
    int found;

    print_empty_line();
    print_line();
    printf("                                DELETE MEMBER SECTION                              \n");
    print_line();

    printf("\nEnter how many members do you want to delete: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i += 1) {
        do {
            found = 0;
            printf("\nEnter Member ID %d to delete: ", i + 1);
            scanf("%d", &del_id);
            getchar();

            FILE *check = fopen("Members.txt", "r");
            if (check == NULL) {
                printf("\nError opening file!\n");
                return;
            }
            while (fscanf(check, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
                if (m.id == del_id) {
                    found = 1;
                    break;
                }
            }
            fclose(check);

            if (!found) {
                printf("Member ID not found! Please enter a valid ID.\n");
            }
        } while (!found);

        FILE *fptr = fopen("Members.txt", "r");
        FILE *temp = fopen("temp.txt", "w");
        if (fptr == NULL || temp == NULL) {
            printf("\nError opening files!\n");
            return;
        }
        while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
            if (m.id != del_id) {
                fprintf(temp, "%d|%s|%s|%lld\n", m.id, m.name, m.email, m.phone);
            }
        }
        fclose(fptr);
        fclose(temp);
        remove("Members.txt");
        rename("temp.txt", "Members.txt");
        printf("\nMember with ID %d deleted successfully!\n", del_id);
        print_line();
    }
    print_empty_line();
}

void showMember() {
    struct member m;
    char line[200];

    print_empty_line();
    print_line();
    printf("                                  ALL MEMBERS LIST                                 \n");
    print_line();

    FILE *fptr = fopen("Members.txt", "r");
    if (fptr == NULL) {
        printf("\nError opening Members.txt\n");
        return;
    }

    printf("\n%-10s %-30s %-30s %-12s\n", "ID", "Name", "Email", "Phone");
    print_line();

    while (fgets(line, sizeof(line), fptr)) {
        if (sscanf(line, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
            printf("%-10d %-30s %-30s %-12lld\n", m.id, m.name, m.email, m.phone);
        }
    }
    fclose(fptr);
    print_line();
    print_empty_line();
}

/* --- Book functions --- */
void addBook() {
    struct book b;
    int n;

    print_empty_line();
    print_line();
    printf("                                   ADD BOOK SECTION                                 \n");
    print_line();

    printf("\nEnter how many books you want to add: ");
    scanf("%d", &n);
    getchar();

    FILE *fptr = fopen("Books.txt", "a");
    if (fptr == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    for (int i = 0; i < n; i += 1) {
        printf("\n--- Enter details for Book %d ---\n", i + 1);
        int duplicate;
        do {
            printf("Enter Book ID: ");
            scanf("%d", &b.id);
            getchar();
            duplicate = isDuplicateBookID(b.id);
            if (duplicate) {
                printf("Book ID already exists! Try a different ID.\n");
            }
        } while (duplicate);

        printf("Enter Book Title: ");
        fgets(b.title, sizeof(b.title), stdin);
        b.title[strcspn(b.title, "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(b.name, sizeof(b.name), stdin);
        b.name[strcspn(b.name, "\n")] = '\0';

        printf("Enter Book Price: ");
        scanf("%f", &b.cost);
        getchar();

        fprintf(fptr, "%d|%s|%s|%.2f\n", b.id, b.title, b.name, b.cost);
        printf("\nBook %d added successfully!\n", i + 1);
        print_line();
    }

    fclose(fptr);
    print_empty_line();
}

void delBook() {
    int n, del_id;
    struct book b;
    int found;

    print_empty_line();
    print_line();
    printf("                                  DELETE BOOK SECTION                               \n");
    print_line();

    printf("\nEnter how many books you want to delete: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i += 1) {
        do {
            found = 0;
            printf("\nEnter Book ID %d to delete: ", i + 1);
            scanf("%d", &del_id);
            getchar();

            FILE *check = fopen("Books.txt", "r");
            if (check == NULL) {
                printf("\nError opening file!\n");
                return;
            }
            while (fscanf(check, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
                if (b.id == del_id) {
                    found = 1;
                    break;
                }
            }
            fclose(check);

            if (!found) {
                printf("Book ID not found! Please enter a valid ID.\n");
            }
        } while (!found);

        FILE *fptr = fopen("Books.txt", "r");
        FILE *temp = fopen("temp.txt", "w");
        if (fptr == NULL || temp == NULL) {
            printf("\nError opening files!\n");
            return;
        }
        while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
            if (b.id != del_id) {
                fprintf(temp, "%d|%s|%s|%.2f\n", b.id, b.title, b.name, b.cost);
            }
        }
        fclose(fptr);
        fclose(temp);
        remove("Books.txt");
        rename("temp.txt", "Books.txt");
        printf("\nBook with ID %d deleted successfully!\n", del_id);
        print_line();
    }
    print_empty_line();
}

void showBook() {
    struct book b;
    char line[200];

    print_empty_line();
    print_line();
    printf("                                   ALL BOOKS LIST                                   \n");
    print_line();

    FILE *fptr = fopen("Books.txt", "r");
    if (fptr == NULL) {
        printf("\nError opening Books.txt\n");
        return;
    }

    printf("\n%-10s %-30s %-30s %-12s\n", "ID", "Title", "Author", "Price");
    print_line();

    while (fgets(line, sizeof(line), fptr)) {
        if (sscanf(line, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
            printf("%-10d %-30s %-30s ₹%-10.2f\n", b.id, b.title, b.name, b.cost);
        }
    }
    fclose(fptr);
    print_line();
    print_empty_line();
}

/* --- Search functions --- */
void searchMember() {
    struct member m;
    char search_name[50];
    int found = 0;

    print_empty_line();
    print_line();
    printf("                                SEARCH MEMBER SECTION                               \n");
    print_line();

    FILE *fptr = fopen("Members.txt", "r");
    if (fptr == NULL) {
        printf("\nError opening Members.txt\n");
        return;
    }

    printf("\nEnter the Member's Name to search: ");
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = '\0';

    printf("\n%-10s %-30s %-30s %-12s\n", "ID", "Name", "Email", "Phone");
    print_line();

    while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
        if (strcasecmp(m.name, search_name) == 0) {
            printf("%-10d %-30s %-30s %-12lld\n", m.id, m.name, m.email, m.phone);
            found = 1;
        }
    }
    fclose(fptr);

    if (!found) {
        printf("\nNo member found with name \"%s\"\n", search_name);
    }
    print_line();
    print_empty_line();
}

void searchBook() {
    struct book b;
    char search_title[50];
    int found = 0;

    print_empty_line();
    print_line();
    printf("                                 SEARCH BOOK SECTION                                \n");
    print_line();

    FILE *fptr = fopen("Books.txt", "r");
    if (fptr == NULL) {
        printf("\nError opening Books.txt\n");
        return;
    }

    printf("\nEnter the Book Title to search: ");
    fgets(search_title, sizeof(search_title), stdin);
    search_title[strcspn(search_title, "\n")] = '\0';

    printf("\n%-10s %-30s %-30s %-12s\n", "ID", "Title", "Author", "Price");
    print_line();

    while (fscanf(fptr, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
        if (strcasecmp(b.title, search_title) == 0) {
            printf("%-10d %-30s %-30s ₹%-10.2f\n", b.id, b.title, b.name, b.cost);
            found = 1;
        }
    }
    fclose(fptr);

    if (!found) {
        printf("\nNo book found with title \"%s\"\n", search_title);
    }
    print_line();
    print_empty_line();
}

/* --- Issue / Return functions --- */
void issueBook() {
    struct transaction t;
    struct member m;
    struct book b;
    int n, memberfound, bookfound, alreadyIssued;

    print_empty_line();
    print_line();
    printf("                                  ISSUE BOOK SECTION                               \n");
    print_line();

    printf("\nEnter how many Books you want to issue: ");
    scanf("%d", &n);
    getchar();

    FILE *fptr = fopen("Issued.txt", "a");
    if (fptr == NULL) {
        printf("\nError opening Issued.txt\n");
        return;
    }

    for (int i = 0; i < n; i += 1) {
        printf("\n--- Issue Entry Number %d ---\n", i + 1);
        do {
            memberfound = 0;
            printf("Enter Member ID: ");
            scanf("%d", &t.m.id);
            getchar();
            FILE *fptr_mem = fopen("Members.txt", "r");
            while (fscanf(fptr_mem, "%d|%29[^|]|%29[^|]|%lld", &m.id, m.name, m.email, &m.phone) == 4) {
                if (m.id == t.m.id) {
                    memberfound = 1;
                    break;
                }
            }
            fclose(fptr_mem);
            if (!memberfound) {
                printf("Member ID %d not found! Please TRY AGAIN!\n", t.m.id);
            }
        } while (!memberfound);

        do {
            bookfound = 0;
            alreadyIssued = 0;
            printf("Enter Book ID: ");
            scanf("%d", &t.b.id);
            getchar();
            FILE *fptr_book = fopen("Books.txt", "r");
            while (fscanf(fptr_book, "%d|%29[^|]|%29[^|]|%f", &b.id, b.title, b.name, &b.cost) == 4) {
                if (b.id == t.b.id) {
                    bookfound = 1;
                    break;
                }
            }
            fclose(fptr_book);
            if (!bookfound) {
                printf("Book ID %d not found! Please try again.\n", t.b.id);
                continue;
            }

            FILE *fptr_check = fopen("Issued.txt", "r");
            if (fptr_check != NULL) {
                int issued_mid, issued_bid, dd, mm, yy;
                while (fscanf(fptr_check, "%d %d %d %d %d", &issued_mid, &issued_bid, &dd, &mm, &yy) == 5) {
                    if (issued_bid == t.b.id) {
                        alreadyIssued = 1;
                        break;
                    }
                }
                fclose(fptr_check);
            }
            if (alreadyIssued) {
                printf("Book ID %d is already issued to another member! Try a different book.\n", t.b.id);
            }
        } while (!bookfound || alreadyIssued);

        printf("Enter Issue Date (DD MM YYYY): ");
        scanf("%d %d %d", &t.d.day, &t.d.month, &t.d.year);
        getchar();

        fprintf(fptr, "%d %d %d %d %d\n", t.m.id, t.b.id, t.d.day, t.d.month, t.d.year);
        printf("\nBook with ID %d issued to Member ID %d on %02d-%02d-%04d\n", t.b.id, t.m.id, t.d.day, t.d.month, t.d.year);
        print_line();
    }

    fclose(fptr);
    print_empty_line();
}

void returnBook() {
    struct transaction t;
    struct member m;
    struct book b;
    int n, memberfound, bookfound, issuedfound;

    print_empty_line();
    print_line();
    printf("                                 RETURN BOOK SECTION                                \n");
    print_line();

    printf("\nEnter how many books you want to return: ");
    scanf("%d", &n);
    getchar();

    FILE *fptr = fopen("Returned.txt", "a");
    if (fptr == NULL) {
        printf("\nError opening Returned.txt\n");
        return;
    }

    for (int i = 0; i < n; i += 1) {
        printf("\n--- Return Entry Number %d ---\n", i + 1);
        do {
            issuedfound = 0;
            do {
                memberfound = 0;
                printf("Enter Member ID: ");
                scanf("%d", &t.m.id);
                getchar();

                FILE *fptr_mem = fopen("Members.txt", "r");
                if (fptr_mem == NULL) {
                    printf("\nError opening Members.txt\n");
                    fclose(fptr);
                    return;
                }
                while (fscanf(fptr_mem, "%d|%29[^|]|%29[^|]|%lld",
                              &m.id, m.name, m.email, &m.phone) == 4) {
                    if (m.id == t.m.id) {
                        memberfound = 1;
                        break;
                    }
                }
                fclose(fptr_mem);
                if (!memberfound)
                    printf("Member ID %d not found! Please TRY AGAIN.\n", t.m.id);
            } while (!memberfound);

            do {
                bookfound = 0;
                printf("Enter Book ID: ");
                scanf("%d", &t.b.id);
                getchar();

                FILE *fptr_book = fopen("Books.txt", "r");
                if (fptr_book == NULL) {
                    printf("\nError opening Books.txt\n");
                    fclose(fptr);
                    return;
                }
                while (fscanf(fptr_book, "%d|%29[^|]|%29[^|]|%f",
                              &b.id, b.title, b.name, &b.cost) == 4) {
                    if (b.id == t.b.id) {
                        bookfound = 1;
                        break;
                    }
                }
                fclose(fptr_book);
                if (!bookfound)
                    printf("Book ID %d not found! Please TRY AGAIN.\n", t.b.id);
            } while (!bookfound);

            FILE *fptr_issued = fopen("Issued.txt", "r");
            FILE *fptr_temp = fopen("temp.txt", "w");

            int issued_mid, issued_bid, dd, mm, yy;
            while (fscanf(fptr_issued, "%d %d %d %d %d",
                          &issued_mid, &issued_bid, &dd, &mm, &yy) == 5) {
                if (issued_mid == t.m.id && issued_bid == t.b.id) {
                    issuedfound = 1;
                } else {
                    fprintf(fptr_temp, "%d %d %d %d %d\n",
                            issued_mid, issued_bid, dd, mm, yy);
                }
            }

            fclose(fptr_issued);
            fclose(fptr_temp);

            if (!issuedfound) {
                printf("\nBook ID %d was NOT issued to Member ID %d!\n", 
                       t.b.id, t.m.id);
                printf("Please enter BOTH Member ID and Book ID again.\n\n");
                remove("temp.txt");
            }

        } while (!issuedfound);

        remove("Issued.txt");
        rename("temp.txt", "Issued.txt");
        printf("Enter Return Date (DD MM YYYY): ");
        scanf("%d %d %d", &t.d.day, &t.d.month, &t.d.year);
        getchar();

        fprintf(fptr, "%d %d %d %d %d\n", t.m.id, t.b.id, t.d.day, t.d.month, t.d.year);
        printf("\nBook with ID %d returned by Member ID %d on %02d-%02d-%04d\n", t.b.id, t.m.id, t.d.day, t.d.month, t.d.year);
        print_line();
    }
    fclose(fptr);
    printf("\nAll return entries recorded successfully!\n");
    print_line();
    print_empty_line();
}

/* --- Show issued / returned lists --- */
void showIssued() {
    struct transaction t;
    char line[200];

    print_empty_line();
    print_line();
    printf("                                ISSUED BOOKS LIST                                 \n");
    print_line();

    FILE *fp = fopen("Issued.txt", "r");
    if (fp == NULL) {
        printf("\nError opening Issued.txt\n");
        return;
    }

    printf("\n%-12s %-12s %-15s\n", "Member ID", "Book ID", "Issue Date");
    print_line();

    while (fgets(line, sizeof(line), fp)) {
        if (sscanf(line, "%d %d %d %d %d", &t.m.id, &t.b.id, &t.d.day, &t.d.month, &t.d.year) == 5) {
            printf("%-12d %-12d %02d-%02d-%04d\n", t.m.id, t.b.id, t.d.day, t.d.month, t.d.year);
        }
    }
    fclose(fp);
    print_line();
    print_empty_line();
}

void showReturned() {
    struct transaction t;
    char line[200];

    print_empty_line();
    print_line();
    printf("                                RETURNED BOOKS LIST                               \n");
    print_line();

    FILE *fp = fopen("Returned.txt", "r");
    if (fp == NULL) {
        printf("\nError opening Returned.txt\n");
        return;
    }

    printf("\n%-12s %-12s %-15s\n", "Member ID", "Book ID", "Return Date");
    print_line();

    while (fgets(line, sizeof(line), fp)) {
        if (sscanf(line, "%d %d %d %d %d", &t.m.id, &t.b.id, &t.d.day, &t.d.month, &t.d.year) == 5) {
            printf("%-12d %-12d %02d-%02d-%04d\n", t.m.id, t.b.id, t.d.day, t.d.month, t.d.year);
        }
    }
    fclose(fp);
    print_line();
    print_empty_line();
}

/* --- Main menu --- */
int main() {
    int log = login(), choice;
    if (log == 1) {
        while (1) {
            print_empty_line();
            print_line();
            printf("                               LIBRARY MAIN MENU                                  \n");
            print_line();

            printf("\n  1  - Add New Members\n");
            printf("  2  - Delete Existing Member\n");
            printf("  3  - Show all Members\n");
            printf("  4  - Add New Books\n");
            printf("  5  - Delete Existing Book\n");
            printf("  6  - Show all Books\n");
            printf("  7  - Search Member by Name\n");
            printf("  8  - Search Book by Name\n");
            printf("  9  - Issue Books\n");
            printf(" 10  - Return Books\n");
            printf(" 11  - Show Issued Books\n");
            printf(" 12  - Show Returned Books\n");
            printf(" 13  - Quit\n");

            print_line();
            printf("\nChoose an operation (1-13):  ");
            scanf("%d", &choice);
            getchar();

            switch (choice) {
                case 1:
                    addMember();
                    break;
                case 2:
                    delMember();
                    break;
                case 3:
                    showMember();
                    break;
                case 4:
                    addBook();
                    break;
                case 5:
                    delBook();
                    break;
                case 6:
                    showBook();
                    break;
                case 7:
                    searchMember();
                    break;
                case 8:
                    searchBook();
                    break;
                case 9:
                    issueBook();
                    break;
                case 10:
                    returnBook();
                    break;
                case 11:
                    showIssued();
                    break;
                case 12:
                    showReturned();
                    break;
                case 13:
                    printf("\nTHANK YOU! Exiting the system.....\n");
                    return 0;
                default:
                    printf("\nInvalid choice! Please enter a number between 1 and 13.\n");
                    continue;
            }
        }
    }
    return 0;
}


// --------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ====================================================================CODE FINISHED===================================================================================