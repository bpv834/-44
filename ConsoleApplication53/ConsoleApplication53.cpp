#include <stdio.h>

struct song {
	char title[20];
	char singer[20];
	int genre;
};

enum genre {
	ballad,hiphap,soul,dance,pop
};

int main() {
	
	struct song arr[] = {
		{"밤편지","아이유",ballad},{"im the one","dj khaled",hiphap},{"jealous","dj khaled",hiphap},{"한여름밤의 꿀","산이",hiphap},{"서울 밤","어반자카파",soul},{"썸머","그레이",soul},{"누구없소","이하이",dance},{"식스틴","일라이골딩",pop} };
	printf("arr[]의 주소=%d arr[0].title=%s, arr[0].singer=%s\n", arr, arr[0].title, arr[0].singer);
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("size의주소=%d,data=%d\n ",&size,size);
	printf("size(arr)의주소=%d,data=%d\n ", &arr, sizeof(arr));
	printf("size(arr[0])의data=%d\n ", sizeof(arr[0]));
	printf("제목                   아티스트                     장르\n");
	for (int i = 0; i < size; i++) {
		switch (arr[i].genre){
		case ballad:
			printf("%-25s %-25s ballad\n ", arr[i].title, arr[i].singer);
			printf("arr[%d].title, arr[%d].singer주소=%d,%d\n", i,i,&arr[i].title, &arr[i].singer);
			break;

		case hiphap:
			printf("%-25s %-25s hiphap\n ", arr[i].title, arr[i].singer);
			printf("arr[%d].title, arr[%d].singer주소=%d,%d\n", i, i, &arr[i].title, &arr[i].singer);
			break;
		case soul:
			printf("%-25s %-25s soul\n ", arr[i].title, arr[i].singer);
			printf("arr[%d].title, arr[%d].singer주소=%d,%d\n", i, i, &arr[i].title, &arr[i].singer);
			break;
		case dance:
			printf("%-25s %-25s dance\n ", arr[i].title, arr[i].singer);
			printf("arr[%d].title, arr[%d].singer주소=%d,%d\n", i, i, &arr[i].title, &arr[i].singer);
			break;
		case pop:
			printf("%-25s %-25s pop\n ", arr[i].title, arr[i].singer);
			printf("arr[%d].title, arr[%d].singer주소=%d,%d\n", i, i, &arr[i].title, &arr[i].singer);
			break;
		default:
			break;

			


		}
	}
}
