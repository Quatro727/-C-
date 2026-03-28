#include <stdio.h>
#include <string.h>//strcmp()
#include <stdbool.h>

enum spectrum {red, orange, yellow, green, blue};
const char* colors[]={"red", "orange", "yellow", "green", "blue"};//포인터가 가리키는 값을 const로 고정

#define LEN 30

int main(){
	char choice[LEN]={0,};
	enum spectrum color;//열거형 변수 color 선언
	bool color_is_found=false;

	while(1){
		puts("Input a color name (empty line to quit): ");

		if(scanf("%[^\n]5*c", choice)!=1)//choice로 문자열 입력받기
			break;
		//열거형 상수 red부터 blue까지 반복하면서 choice와 colors 배열의 문자열을 비교
		for(color=red;color<=blue;color++){
			if(strcmp(choice, colors[color])==0){
				color_is_found=true;
				break;
			}
		}
		//bool 타입 변수 color_is_found이 true이면 switch문으로 color의 값에 따라 해당하는 메시지 출력
		if(color_is_found)
			//열거형 상수에 따른 제어흐름->color값에 따라 메세지 출력
			switch(color){
				case red:
					puts("Red roses");
					break;
				case orange:
					puts("Pranges are delicious");
					break;
				case yellow:
					puts("Yellow sunflowers");
					break;
				case green:
					puts("Green apples");
					break;
				case blue:
					puts("Blue ocean");
					break;
			}
		else{
			printf("Please try diffent color %s\n", choice);
		}
		color_is_found=false;
	}
	puts("Goodbye");

	return 0;
}