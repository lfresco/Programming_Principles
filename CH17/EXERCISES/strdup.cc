
char* strdup(const char* s) {
	if (s == nullptr) return nullptr;

	// come prima cosa dobbiamo determinare il numero di elementi di s
	int n = 0;
	
	while(s[n] != 0) {
		n++;
	}

	// Allochiamo adesso una porzione di memoria uguale a n + 1. Dobbiamo tenere
	// conto del fatto che l'ultimo elemento uguale a zero prima non lo avevamo
	// contato

	char* nuovo = new char[n + 1];

	//Adesso non ci resta che copiare il contenuto di s

	for(int i = 0; i < n; i++) {
		nuovo[i] = s[i];
	}
	//Assegnamo 0 all'ultimo elemento di nuovo
	nuovo[n] = 0;

	// Liberiamo la memoria di s
	delete[] s;

	return nuovo;

	
}
