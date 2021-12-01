#include <bits/stdc++.h>

void parser(char* S){
	int len = strlen(S);
	int start = 0, end = 0;

	for (int i = 0; i < len; i++) {
		if (S[i] == '>') {
			start = i + 1;
			break;
		}
	}
	while (S[start] == ' ') {
		start++;
	}

	for (int i = start; i < len; i++) {
		if (S[i] == '<') {
			end = i - 1;
			break;
		}
	}

	for (int j = start; j <= end; j++) {
		std::cout << S[j];
	}

	std::cout << std::endl;
}

int main() {
	char input1[] = "<h1>Woaaa woooo ahahah</h1>";
	char input2[] = "<h1>H1      tag with spaces</h1>";
	char input3[] = "<p> P tag with ¡@£½¥{[]}][{¥½$£@ wack characters</p>";

	parser(input1);
	parser(input2);
	parser(input3);
	return 0;
}