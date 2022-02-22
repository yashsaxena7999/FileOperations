#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char str[100];
    int length, i;
    ptr1 = fopen("Mycaptain.txt", "r");
    if (ptr1 == NULL)
    {
        printf("Error in Opening the File!");
    }
    else
    {
        fgets(str, 100, ptr1);
        printf("The contents of the file is : ");
        printf("%s\n", str);
        length = strlen(str);
        printf("The Contents of the file in reverse order : ");
        for (i = length; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\nContents of the Orignal file is also copied to a new file!");
        ptr2 = fopen("CopyFile.txt", "w");
        fprintf(ptr2, "%s", str);
        fclose(ptr1);
        fclose(ptr2);
    }
    return 0;
}
