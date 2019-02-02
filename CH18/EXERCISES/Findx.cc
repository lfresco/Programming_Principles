/*
Scrivere una funzione che che trova la prima occorrenza della sottostringa x in una C-style string
*/

char* findx(const char* s, const char* x) {
	// Come prima cosa andiamo a recuperare la dimensione di s e di x
	int size_s = 1;
	while(*s) size_s++ ;

	int size_x = 1;
	while(*x) size_x++ ;

	for(int i = 0; *(s + i); i++) { //il ciclo così impostato va avanti fino a che *s non è uguale 
		    // a zero, cioè fino a che non abbiamo raggiunto la fine della
		    // stringa

		    //Primo controllo *s == *x?
		    if(*(s + i) == *x) {
		    	//Abbiamo trovato una prima uguaglianza. Dobbiamo salvare
			//questa posizione perchè sarà quella che dovremo ritornare
			// alla fine

			char * partenza  = s;

			//Ora dobbiamo scorrere in contemporanea s e x per vedere
			//se gli elementi continuano a coincidere. Si possono veri
			//ficare 3 casi : 1) non sono più uguali 2) sono uguali
			// 3) finisce s

			// La mia idea è quella di fare un ciclo for che va avanti 
			// fino a che non finisce x e che al suo interno gestisce
			// i tre casi. Per fare questo mi serve però la lunghezza dix

			for(int j = 0; *(x + j); i++) 
			{
				if(!*(s + i + j)) return 0; // abbiamo raggiunto la fine di s (caso 3)
				if(*(s + i +j) != *(x +j)) break; // x non trovato (caso 1)
				if(!*(x + j + 1)) return (s + i);  // abbiamo trovato x (caso 2)
					
					break;
				}
			}
		}
		
	return 0; // si arriva qua quando s non ha più elementi
}
