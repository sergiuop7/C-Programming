#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char *menu =
"Options:\n"
"    1. Replace line\n"
"    2. Erase line\n"
"    3. Exit\n"
"Choice? ";

void open_replace_or_erase_and_save(const char *filename, bool replace) {
	int num = 0;
	char ch;
	char line_buf[51]; // SCHIMBA DACA FISIERUL ARE LINII MAI LUNGI DE 50

	FILE *input_file = fopen(filename, "r");
	FILE *temp_file = fopen("temp", "w");

	if(replace)	printf("Line number to replace: ");
	else printf("Line number to erase: ");
	scanf("%d", &num);

	// NONSTANDARD, dar trece peste ce avem in stdin buffer, pana la urmatorul rand
	fflush(stdin);

	// transcriem randurile de dinainte de cel specificat
	for(int i = 1; i < num; i++) {
		fgets(line_buf, sizeof(line_buf), input_file);
		fputs(line_buf, temp_file);
	}

	// singura diferenta intre replace si erase e daca facem chestia asta
	if(replace) {
		printf("New content to add (end with Ctrl-Z): ");
		while((ch = getchar()) != EOF) {
			fputc(ch, temp_file);
		}
	}

	// sarim peste linia veche
	fgets(line_buf, sizeof(line_buf), input_file);

	// transcriem tot ce a mai ramas
	while(!feof(input_file)) {
		fgets(line_buf, sizeof(line_buf), input_file);
		if(feof(input_file)) line_buf[0] = '\0';
		fputs(line_buf, temp_file);
	}

	fclose(input_file);
	fclose(temp_file);

	remove(filename);
	rename("temp", filename);
}

int main() {
	char filename[51];
	int opt = 0;

	printf("Filename? ");
	scanf("%50s", filename);

	while(1) {
		puts(menu);
		scanf("%d", &opt);
		if(opt == 1) {
			open_replace_or_erase_and_save(filename, true);
		} else if(opt == 2) {
			open_replace_or_erase_and_save(filename, false);
		} else if(opt == 3) {
			printf("Exiting!\n");
			break;
		} else {
			printf("Invalid option %d!\n", opt);
		}
	}
}
