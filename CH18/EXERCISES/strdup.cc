/*
Scrivere una funzione che copi una C-style string nell'heap
*/
char*strdupl(const char * s) {
	
	//prima cosa da fare è recuperare la dimensione della stringa
	//in modo da poter allocare la giusta quantità di memoria

	int i = 0;
	const char* p = s;
	while(*p++) i++;

	//adesso che abbiamo la dimensione nella stringa possiamo allocare la
	//memoria

	char* str_cpy = new char[i + 1] // i + 1 perchè dobbiamo lasciare l'ultimo
					// posto per lo 0
	
	char* str_cpy_ptr = str_cpy; // il puntatore ci permette di muoverci lungo 
				     // la stringa
	
	while(*s) *str_cpy_ptr ++ = *s ++; //fintanto che l'elemento puntato da s è
					   // diverso da zero copiamo nella cella
					   // puntata da str_cpy_ptr quello che è
					   // contenuto nella cella puntata da *s

	*str_cpy_ptr = 0; // poniamo uguale a zero l'ultimo elemento;

	return str_cpy;

}
