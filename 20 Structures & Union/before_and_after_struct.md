# Before and After `struct` in C

A comparison demonstrating how grouping related variables into a `struct` improves code organization and readability when managing multiple records.

### Before `struct` (Parallel Arrays)

```c
#include <string.h>

int main() {
    // CREATE ARRAY FOR TEN STUDENTS
    char name[10][50];
    int group[10];
    double gpa[10];

    // SET VALUE TO THE FIRST STUDENT
    strcpy(name[0], "Ludwig");
    group[0] = 3;
    gpa[0] = 3.99;

    return 0;
}
```

### After `struct` (Array of Structures)

```c
#include <string.h>

struct Student {
    char name[50];
    int group;
    double gpa;
};

int main() {
    struct Student students[10];

    // SET VALUE TO THE FIRST STUDENT
    strcpy(students[0].name, "Ludwig");
    students[0].group = 3;
    students[0].gpa = 3.99;

    return 0;
}
```
