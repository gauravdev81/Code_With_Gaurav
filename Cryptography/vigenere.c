#include <stdio.h>

int main()
{
    FILE *sourceFile = fopen("plaintext.txt", "r");
    FILE *destinationFile = fopen("vigenereCipherText.txt", "w");

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
    //int key = 17;
    int temp;
    int result;
    char ans;
    int size=3;
    char key[3] = {'N','I','T'}; 
    int keyInt[3];
    int temp1;
    for(int i=0;i<size;i++)
    {
        temp1 = key[i];
        if (temp1 >= 97 && temp1 <= 122)
        {
            temp1 = temp1 - 97;
        }
        else
        {
            temp1 = temp1 - 65;
        }
        keyInt[i]=temp1;


    }
     
    int i=0;
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
        
        
        result = ((temp + keyInt[i%3]) % 26) + 65;
        i++;
        //key = temp;
        
        

        
        fputc(result, destinationFile);
        printf("%c\t", result);

        // putchar(c);
    }
    
    


    // Close both file
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
