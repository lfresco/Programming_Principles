REVIEW

1) What are the two parts of a class, as described in the chapter?

Ci sono due parti fondamentali nella costruzione di una classe e sono l'Interfaccia e l'Implementation. La prima è la parte che viene utilizzata dall'utente mentre la seconda è la parte della dichiarazione a cui l'utente accede indirettamente utilizzando l'interfaccia

2)What are the limitations and problems of the original Date struct that is
created in the chapter?

Eh che non vi sono membri privati quindi chiunque può cambiare i valori delle Date. Questo può creare molti problemi, specie per quanto riguarda la validità di quanto vogliamo rappresentare.

3)What is an invariant? 
E' una regola che ci permette di determinare se quanto appena creato ha un valore valido o meno.

4)When should functions be put in the class definition, and when should
they be defined outside the class? Why?

Quando sono corte, quando sono cioè funzioni di poche righe che non sono molto complesse ma che vengono utilizzate spessissimo. Vanno definite fuori quando sono troppo complesse o quando non siamo sicuri che una loro definizione all'interno della classe possa generare l'aumento di performance che ci si aspetta dall'inling.

5)When should operator overloading be used in a program?

Quando vogliamo utilizzare gli operatori presenti in C++ sugli oggetti da noi creati.

6)What does adding const to a member function do?

const va in modo che utilizzare queste funzioni non vada a modificare l'oggetto sulle quali stiamo operando.

7)Why are “helper functions” best placed outside the class definition?

Perchè più che un programming language concept sono dei design concept. 
