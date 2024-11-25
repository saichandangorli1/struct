#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *srcFile, *destFile;
  char srcPath[100], destPath[100]; // Considering file path as string
  char ch;

  printf("Enter the path of the source file: ");
  scanf("%s", srcPath);

  printf("Enter the path of the destination file: ");
  scanf("%s", destPath);

  srcFile = fopen(srcPath, "w");

  if (srcFile == NULL) {
    printf("Error opening the source file.\n");
    return 1; // Indicate an error
  }

  destFile = fopen(destPath, "w");

  if (destFile == NULL) {
    printf("Error opening the destination file.\n");
    fclose(srcFile);
    return 1;
  }

  while ((ch = fgetc(srcFile)) != EOF) {
    fputc(ch, destFile);
  }

  printf("File copied successfully.\n");

  fclose(srcFile);
  fclose(destFile);

  return 0;
}