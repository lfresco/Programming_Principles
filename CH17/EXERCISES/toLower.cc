
void to_lower(char * s);

int main(int argv, char * argc[]) {

	return 0;
}

void to_lower(char* s) {
	for (int i = 0; s[i]; ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 'a' - 'A';
		}
	}
}
