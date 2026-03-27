/*10. 구조체 파일 입출력 연습문제*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};
//파일을 읽고 쓰는 함수들
void print_books(const struct book* books, int n);
void write_books(const char * filename, const struct book* books, int n);
struct book* read_books(const char* filename, int * n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);

	if (!my_books) {
		printf("Malloc failed");
		exit(1);
	}
    //구조체는 선언과 동시에 초기화시 캐스팅을 할 필요가 없다.
    //그러나 따로 초기화를 진행하게 되면 compiler가 배열과 혼동할 수 있어 캐스팅을 해줘야 한다.
	my_books[0] = (struct book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct book){ "Hamlet", "William Shakespeare" };
	my_books[2] = (struct book){ "The Odyssey", "Homer" };

    //파일의 내용을 읽어 출력
	print_books(my_books, n);

    //파일 books.txt에 내용 쓰기
	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);
	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file.\n\n");
	temp = _getch();

    //수정된 내용을 읽어 메모리에 저장하기
	my_books = read_books("books.txt", &n);//read_books2("books.txt", &my_books, &n);
    
    //파일 내용 출력
	print_books(my_books, n);
	free(my_books);
	n = 0;

	return 0;
}

//파일 내용을 메모리에서 가져와서 출력하기(포인터 변수 books를 이용)
void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; ++i)
		printf("Book %d : \"%s\" written by \"%s\"\n",
			i + 1, books[i].name, books[i].author);
}

//파일을 열어 쓰기 작업 수행하기(포인터 변수 이용)
void write_books(const char* filename, const struct book* books, int n)
{
	FILE* file = fopen(filename, "w");

	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(1);
	}
    //fprintf()를 이용해 file에다가 책의 개수를 적기
	fprintf(file, "%d\n", n);// number of books
    //포인터 변수 books를 통해 전달받은 메모리 공간의 내용을 fprintf()를 이용해 file에 쓰기
	for (int i = 0; i < n; ++i)
		fprintf(file, "%s\n%s\n", books[i].name, books[i].author);
    //파일 닫기
	fclose(file);
}

//파일 내용을 읽는 함수(포인터 변수 이용)
struct book* read_books(const char* filename, int * n_ptr)
{
	FILE* file = fopen(filename, "r");
	
	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(1);
	}

    //fscanf()를 이용해 파일 내용을 읽어 책의 권수 파악하기(이떄 왜 포인터 변수를 전달하는 지 알 수 있음)
    //단순히 n을 전달했다면 다른 변수이지만 포인터를 통해 메모리 주소 접근이 가능하게 해 인수의 변경을 가능하게 함
	int flag;
	flag = fscanf(file, "%d%*c", n_ptr);// Remove last \n
	if (flag != 1) {
		printf("File read failed");
		exit(1);
	}
    //파일에서 읽은 n_ptr값을 통해 메모리 공간 할당
	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);//Note: calloc()

	if (!books) {
		printf("Malloc() failed.");
		exit(1);
	}
    //파일의 내용을 읽어 포인터 변수를 이용해 메모리에 파일의 내용을 반영
	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2) {
			printf("File read failed");
			exit(1);
		}
	}

	fclose(file);

	return books;
}

void read_books2(const char* filename, struct book** books_dptr, int* n_ptr)//Note: double pointer
{
	FILE* file = fopen(filename, "r");

	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(1);
	}

	int flag;
	flag = fscanf(file, "%d%*c", n_ptr);// Remove last \n
	if (flag != 1) {
		printf("File read failed");
		exit(1);
	}

	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);//Note: calloc()

	if (!books) {
		printf("Malloc() failed.");
		exit(1);
	}

	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2) {
			printf("File read failed");
			exit(1);
		}
	}

	fclose(file);

	*books_dptr = books;
}