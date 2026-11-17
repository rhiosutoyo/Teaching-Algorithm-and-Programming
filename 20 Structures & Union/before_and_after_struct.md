# Before and After `struct` in C

A side-by-side comparison demonstrating how grouping related variables into a `struct` improves code organization and readability when managing multiple records.

| Before `struct` (Parallel Arrays) | After `struct` (Array of Structures) |
| :--- | :--- |
| <pre lang="c">#include &lt;string.h&gt;<br><br>int main() {<br>    // CREATE ARRAY FOR TEN STUDENTS<br>    char name[10][50];<br>    int group[10];<br>    double gpa[10];<br><br>    // SET VALUE TO THE FIRST STUDENT<br>    strcpy(name[0], "Ludwig");<br>    group[0] = 3;<br>    gpa[0] = 3.99;<br><br>    return 0;<br>}</pre> | <pre lang="c">#include &lt;string.h&gt;<br><br>struct Student {<br>    char name[50];<br>    int group;<br>    double gpa;<br>};<br><br>int main() {<br>    struct Student students[10];<br><br>    // SET VALUE TO THE FIRST STUDENT<br>    strcpy(students[0].name, "Ludwig");<br>    students[0].group = 3;<br>    students[0].gpa = 3.99;<br><br>    return 0;<br>}</pre> |