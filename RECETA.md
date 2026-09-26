# Receta: Guardar los números pares

1. Mostrar mensaje de bienvenida
2. totalPares ← total pares++
3. contador ← ___0___
4. MIENTRAS contador ___<=5___ CANTIDAD HACER
       numero ← leerEntero("___ingresa un numero___")
       SI numero __n mod2=0____ ENTONCES
           pares[___total pares___] ← numero
           totalPares ← _____total pares++_
       FIN SI
       contador ← ___contador++___
   FIN MIENTRAS
5. Mostrar "Pares encontrados: " y __cuales son____
6. i ← 0
7. MIENTRAS i __<total pares____ ______ HACER
       Mostrar pares[i]
       i ← _____i++_
   FIN MIENTRAS