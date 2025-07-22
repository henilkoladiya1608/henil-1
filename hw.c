#include <stdio.h>
#include <string.h>

// Structure definition for person
struct Person {
    int id;
    char name[50];
    int age;
    char role[10]; // "Student" or "Staff"
};

int main() {
    int n;
    printf("Ketla vyakti ni mahiti store karvi chhe? ");
    scanf("%d", &n);
    getchar(); // clear newline

    struct Person people[n]; // Array of structure

    // Input loop
    for (int i = 0; i < n; i++) {
        printf("\nVyakti %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &people[i].id);
        getchar();

        printf("Name: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);
        strtok(people[i].name, "\n"); // remove newline

        printf("Age: ");
        scanf("%d", &people[i].age);
        getchar();

        printf("Role (Student/Staff): ");
        fgets(people[i].role, sizeof(people[i].role), stdin);
        strtok(people[i].role, "\n");
    }

    // Output loop
    printf("\n----- College Information -----\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", people[i].id);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Role: %s\n\n", people[i].role);
    }

    return 0;
}