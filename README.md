# Student Record Management System

A menu-driven **Student Record Management System** written in C using a **singly linked list**, **dynamic memory allocation**, **modular programming**, and **file handling**.

---

## Features

- **Automatic Roll Number Allocation (`a/A`):** Dynamically allocates a new student node using `malloc()` and assigns the smallest unused positive integer as the unique roll number (e.g., if `1, 2, 4, 5` exist, the next assigned roll number is `3`).
- **Delete Record (`d/D`):** Delete a student record by **roll number (`R/r`)** or **name (`N/n`)** (displays matching roll numbers if duplicate names exist) and frees allocated memory.
- **Display Records (`s/S`):** Displays all student records in a formatted table (`Roll No.`, `Name`, `Percentage`).
- **Modify Record (`m/M`):** Search by **roll number (`R/r`)**, **name (`N/n`)**, or **percentage (`P/p`)** and update the student's name and percentage while preserving their roll number.
- **File Persistence (`v/V`):** Saves the linked list to `data.txt` and automatically reloads existing records from `data.txt` on startup.
- **Sort Records (`t/T`):** Sort the list alphabetically by **name (`N/n`)** or in descending order by **percentage (`P/p`)**.
- **Delete All Records (`l/L`):** Clears all nodes from memory and resets the head pointer to `NULL` without deleting `data.txt`.
- **Reverse List (`r/R`):** Reverses the singly linked list in-place by updating node pointers.
- **Safe Exit (`e/E`):** Supports **Save and Exit (`S/s`)** or **Exit Without Saving (`E/e`)**, freeing all dynamically allocated memory before termination.

---

