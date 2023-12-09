#include <iostream>
#include <dirent.h>

int main(int argc, char const *argv[])
{
    // TODO: Make a program in which you can see the contents of the actual directory
    // Open the current directory
    DIR *dir = opendir(".");
    
    // Check if the directory was opened successfully
    if (dir == NULL) {
        perror("Error opening directory");
        return 1;
    }

    // Read and print directory entries
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        // Ignore "." and ".." entries
        if (entry->d_name[0] == '.') {
            continue;
        }

        // Print the name of the file or directory
        printf("%s\n", entry->d_name);
    }

    // Close the directory
    closedir(dir);

    return 0;
}
