Lo primero que hago es leer el número de casos que habrá
    después hago un for con ese número y de ahí creo un array inicializado en 1200 ya que puede haber 100 palabras de longitud 10 cada una
    y cuento el espacio y el caracter '\0'.
    Leo cada línea y la pongo en el array.

    Lo primero que se me vino a la mente es que era necesario saber cuando una palabra acababa y con ello iba a ser más fácil printear las palabras
    Al iniciar al final de la linea se puede ir imprimiendo la palabra si se recorre hasta el principio, el problema es como saber cuando acaba una palabra
    así que se me ocurrió yo añadir el caracter '\0' entre cada espacio así solucioné lo primero que pensé que era lo escencial.

    Solucioné el problema al recorrer la linea desde el final hasta el principio, si encuentro un espacio lo sustituyo por '\0' y hago un print de lo que llevo y como añadí el '\0' entonces siempre printeará una palabra.
    Se repite este proceso siempre y pues siempre va a imprimir hasta que encuentra el '\0'