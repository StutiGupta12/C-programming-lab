#include <stdio.h>

// Define a structure to represent student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to write student data to a file
void writeStudentData(const char *filename, struct Student students[], int size) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file);
    printf("Student data written to the file successfully.\n");
}

// Function to read student data from a file
void readStudentData(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    printf("\nReading student data from the file:\n");

    struct Student student;

    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.rollNumber, student.marks);
    }

    fclose(file);
}

int main() {
    // Declare an array of structures to store student data
    struct Student students[3] = {
        {"John Doe", 101, 85.5},
        {"Jane Smith", 102, 92.0},
        {"Bob Johnson", 103, 78.5}
    };

    const char *filename = "student_data.txt";

    // Write student data to a file
    writeStudentData(filename, students, 3);

    // Read and display student data from the file
    readStudentData(filename);

    return 0;
}