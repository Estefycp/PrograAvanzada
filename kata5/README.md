You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

"After beating the eggs, Dana read the next step:"
"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 2.


Solution

Para ver el número de veces que se repite una palabra se tiene que checar todo el input y saber que cada palabra termina cuando hay un espacio hasta llegar al final de la oración. Con las reestricciones que nos dan lo primero sería pasar todo el String a minúsculas y quitar los signos de puntuación, de ahí ir metiendo palabra por palabra a una hash table y cada vez que se meta una palabra sumar 1, si estaba vacio inicializar a 1, al final se imprime la palabra y su valor.

