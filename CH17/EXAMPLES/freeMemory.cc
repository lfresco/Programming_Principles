
double* calc(int res_size, int max) 
{
	double* p = new double[max];
	double* res = new double[res_size];
	// utilizzo per p per calcolare risultati da inserire in res
	return res;
}

/*
Nella funzione sopra ad ogni chiamata di calc ho un leak degli elementi di p
*/

double* calc_corr(int res_size, int max) 
{
	double* p = new double[max];
	double* res = new double[res_size];
	//utilizzo p per ottenere risultati da inserire in res
	delete[] p; //non mi serve più
	return res;
}
/*
Supponiamo qui di trovarci all' interno del main
*/
double* r = calc(100, 1000);
// use r

delete[] r; // non ci serv più
