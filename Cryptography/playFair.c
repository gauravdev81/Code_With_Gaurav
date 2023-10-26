#include <stdio.h>

int main()
{
    FILE *sourceFile = fopen("plaintext.txt", "r");
    FILE *destinationFile = fopen("multi_CipherText.txt", "w");

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
    int size = 5;
    char temp[100];
    char c;
    int k=0;

    //copying plaintext in temp array
    while ((c = fgetc(sourceFile)) != EOF)
    {
        temp[k] = c;
        k++;

    }
    

    // for(int i=0;i<=9;i++)
    // {
    //     printf("%c\t",temp[i]);
    // }


    //Taking user input for key matrix

    char key[5][5]= {
        {'d','r','i','k','c'},
        {'s','b','h','o','m'},
        {'e','l','w','a','t'},
        {'f','u','g','h','v'},
        {'q','y','z','x','p'}

    };
    // printf("Enter the key matrix\n");
    
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         scanf("%c",&key[i][j]);
    //     }
    // }

    printf("Entered key matrix is \n");

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%c\t",key[i][j]);
        }
        printf("\n");
    }



    // Close both file
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
