#include <iostream>
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fstream>
#include <iomanip>

using namespace std;

void ls(const char *dir) {
  DIR *handle = opendir(dir);
  cout << "Directory of " << dir << endl;
  if (handle == NULL) {
    return;
  }
  struct dirent *entry;
  int file_count = 0;
  int total_bytes = 0;

  while ((entry = readdir(handle)) != NULL) {
    string name = entry->d_name;
    if (name == "." || name == "..") {
      continue;
    }

    FILE *fp = fopen(entry->d_name, "r");
    if (fp == NULL) {
      continue;
    }

    int file_size_in_bytes = 0;
    fseek(fp, 0, SEEK_END);
    file_size_in_bytes = ftell(fp);
    fclose(fp);
    total_bytes += file_size_in_bytes;

    struct stat st;
    stat(entry->d_name, &st);
    struct tm *timeinfo = localtime(&st.st_mtime);
     cout << put_time(timeinfo, "%Y/%m/%d %H:%M") << "\t" << file_size_in_bytes
             << "\t" << entry->d_name << endl;
         
    file_count++;
  }
  cout << "\t " << file_count << " files(s) \t " << total_bytes << " bytes"
       << endl;
  closedir(handle);
}

int main(void) {
  ls("./");
  return 0;
}
