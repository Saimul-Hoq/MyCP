#include<iostream>
#include<stdlib.h>
using namespace std;

//int main()
//{
    /*FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is a file created by my programme.");
    fprintf(fp, "I am so Happy");

    fclose(fp);*/

    /*FILE *file;

    char filename[] = "dimikFile.txt";

    file = fopen(filename, "w");

    fprintf(file, "Hi! I am Saimul\n");
    fprintf(file, "I am writing from code.\n");
    fclose(file);

    file = fopen(filename, "a+");
    fprintf(file, "Again writing");
    fclose(file);*/

    /*FILE *file;
    int num1, num2, sum;
    char infilename[]="dimikFile_in.txt";

    file = fopen(infilename, "w");
    fprintf(file, "3\n");
    fprintf(file, "7\n");
    fclose(file);

    file = fopen(infilename, "r");
    fscanf(file, "%d", &num1);
    fscanf(file, "%d", &num2);
    fclose(file);
    sum = num1 + num2;


    file = fopen("dimikFile_out.txt", "w");
    fprintf(file, "%d", sum);
    fclose(file);*/

   /* FILE *file;

    int num1, num2, multi;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    char inFile[]="dimikFile_in.txt", outFile[]="dimikFile_out.txt";

    file = fopen(inFile, "w");
    fprintf(file, "%d\n%d\n", num1, num2);
    fclose(file);

    int readnum1, readnum2;
    file = fopen(inFile, "r");
    fscanf(file, "%d", &readnum1);
    fscanf(file, "%d", &readnum2);
    fclose(file);

    multi = readnum1*readnum2;

    file = fopen(outFile, "w");
    fprintf(file, "%d\n",multi);
    fclose(file);
    */

    /*FILE *file;

    int num1, num2, multi;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    char infile[] = "dimikFile_in.txt";
    char outfile[] = "dimikFile_out.txt";

    file = fopen(infile, "w");
    fprintf(file, "%d %d\n", num1, num2);
    fprintf(file, "6 7\n");

    fclose(file);

    char line[80];
    int readnum1, readnum2;

    file = fopen(infile, "r");
    fgets(line, 80, file);
    printf("Line = %s\n", line);
    sscanf(line, "%d %d", &readnum1, &readnum2);
    fclose(file);

    multi = readnum1*readnum2;

    file = fopen(outfile, "w");
    fprintf(file,"%d\n",multi );
    fclose(file);

    */



    //return 0;
//}



//Student Average Marks:
/*int main()
{
    FILE  *file;

    char mathfile[] = "mathfile.txt";
    char engfile[] = "englishfile.txt";
    char bangfile[] = "banglafile.txt";

    int mathNum[10], englishNum[10], banglaNum[10];

    //Math Entry:
    printf("Enter Math Numbers:\n");
    for(int i=0; i<10; i++)
    {
        printf("Roll %d = ", i+1);
        scanf("%d", &mathNum[i]);
    }

    file = fopen(mathfile, "w");
    for(int i=0; i<10; i++)
    {
        fprintf(file, "%d %d\n", i+1, mathNum[i]);
    }
    fclose(file);

    //English Entry:
    printf("Enter English Numbers:\n");
    for(int i=0; i<10; i++)
    {
        printf("Roll %d = ", i+1);
        scanf("%d", &englishNum[i]);
    }

    file = fopen(engfile, "w");
    for(int i=0; i<10; i++)
    {
        fprintf(file, "%d %d\n", i+1, englishNum[i]);
    }
    fclose(file);

    //Bangla Entry:
    printf("Enter Bangla Numbers:\n");
    for(int i=0; i<10; i++)
    {
        printf("Roll %d = ", i+1);
        scanf("%d", &banglaNum[i]);
    }

    file = fopen(bangfile, "w");
    for(int i=0; i<10; i++)
    {
        fprintf(file, "%d %d\n", i+1, banglaNum[i]);
    }
    fclose(file);

    //________________X File Creation X_____________________

    int rMathNum[10], rEnglishNum[10], rBanglaNum[10], result[10], roll[10];
    char line[50];

    //Math File Read:
    file = fopen(mathfile, "r");
    for(int i=0; i<10; i++)
    {
        fgets(line, 50, file);
        sscanf(line, "%d %d",&roll[i], &rMathNum[i]);
    }
    fclose(file);

    //English file read:
    file = fopen(engfile, "r");
    for(int i=0; i<10; i++)
    {
        fgets(line, 50, file);
        sscanf(line, "%d %d",&roll[i], &rEnglishNum[i]);
    }
    fclose(file);

    //Bangla File Read:
    file = fopen(bangfile, "r");
    for(int i=0; i<10; i++)
    {
        fgets(line, 50, file);
        sscanf(line, "%d %d",&roll[i], &rBanglaNum[i]);
    }
    fclose(file);

    //____________________X Read X________________________


    for(int i=0; i<10; i++)
    {
        result[i] = (rMathNum[i]+rEnglishNum[i]+rBanglaNum[i])/3;
    }

    char resultFile[] = "resultFile.txt";
    file = fopen(resultFile, "w");
    for(int i=0; i<10; i++)
    {
        fprintf(file, "%d %d\n", roll[i], result[i]);
    }
    fclose(file);





    return 0;




}*/
int main()
{
    
    /*FILE *fileIn, *fileOut;

    char *inputFile = "image1.png";
    char *outputFile = "image2.png";
    int biNum;

    fileIn = fopen(inputFile, "rb");
    if(fileIn == NULL)
    {
        perror("File Opening Failed");
        return EXIT_FAILURE;
    }

    fileOut = fopen(outputFile, "wb");

    while(1)
    {
        biNum = fgetc(fileIn);
        if(biNum == EOF)
        {
            break;
        }

        fputc(biNum, fileOut);
    }

    fclose(fileIn);
    fclose(fileOut);
    */

    /*FILE *fileIn, *fileOut;

    char *inputFile = "image4.jpg";
    char *outputFile = "image5.jpg";
    int biNum;

    fileIn = fopen(inputFile, "rb");
    if(fileIn == NULL)
    {
        perror("File Opening Failure");
        return EXIT_FAILURE;
    }

    fileOut = fopen(outputFile, "wb");
    if(fileOut == NULL)
    {
        perror("File Opening Failure");
        return EXIT_FAILURE;
    }

    while(1)
    {
        biNum = fgetc(fileIn);
        if(biNum == EOF)
        {
            break;
        }
       

        fputc(biNum, fileOut);
    }

    fclose(fileIn);
    fclose(fileOut);
    */


    FILE *fileIn, *fileOut;

    char *inputFile = "image4.jpg";
    char *outputFile = "image5.jpg";
    int biNum;

    fileIn = fopen(inputFile, "rb");
    if(fileIn == NULL)
    {
        perror("File Opening Failure");
        return EXIT_FAILURE;
    }

    fileOut = fopen(outputFile, "wb");
    if(fileOut == NULL)
    {
        perror("File Opening Failure");
        return EXIT_FAILURE;
    }

    while(1)
    {
        biNum = fgetc(fileIn);
        if(biNum == EOF)
        {
            break;
        }

        fputc(biNum, fileOut);
    }

    fclose(fileIn);
    fclose(fileOut);


    return 0;
}