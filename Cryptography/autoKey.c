#include <stdio.h>

int main()
{
    FILE *sourceFile = fopen("plaintext.txt", "r");
    FILE *destinationFile = fopen("autoKeyCipherText.txt", "w");

    if (sourceFile == NULL)
    {
        perror("Unable to open the file");
        return 1;
    }

    if (destinationFile == NULL)
    {
        perror("Unable to create destination file");
        fclose(sourceFile);
        return 1;
    }

    // Read and print the file content character by character
    int c;
    int key = 17;
    int temp;
    int result;
    char ans;
    
    while ((c = fgetc(sourceFile)) != EOF)
    {
        
        temp = c;
        // if c is in lowercase
        if (temp >= 97 && temp <= 122)
        {
            temp = temp - 97;
        }
        else
        {
            temp = temp - 65;
        }
        
        
        result = ((temp + key) % 26) + 65;
        key = temp;
        
        

        
        fputc(result, destinationFile);
        printf("%c\t", result);

        // putchar(c);
    }
    
    


    // Close both file
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
