#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_num = 0;
    float current_balance = 0.0;
    float euro_amount = 0.0;
    char name[20] = {'\0'};
    // a
    FILE *file_ptr = fopen("file.txt", "r");
    // b
    FILE *file1_ptr = fopen("file1.txt","r");
    // c
    FILE *file2_ptr = fopen("file2.txt", "w");
    //d
    fscanf(file_ptr, "%d %f %s", &account_num, &current_balance, name);
    //e
    fscanf(file1_ptr, "%d %f", &account_num, &euro_amount);
    //f
    fprintf(file2_ptr, "%d %s %f", account_num, name, current_balance);

    fclose(file_ptr);
    fclose(file1_ptr);
    fclose(file2_ptr);
    return 0;
}
