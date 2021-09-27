#include <stdio.h>
//TD3
int main()
{
//EXERCICE 1 */
    /*int a = 0 , b = 0 ;
    printf (" Saissisez un entier ");
    scanf (" %d" , &a ) ;
    printf (" Saissisez un  autre entier \n ");
    scanf (" %d" , &b ) ;
    if ( a < b) {
        printf("b est le plus grand des deux nomrbres \n ");
    }
    else {
        printf("a est le plus grand des deux nomrbres \n ");
    }*/

//EXERCICE 2
    /*int lon = 0 , lar = 0  ;
    printf (" \n Saissisez la longueur du rectangle ");
    scanf (" %d" , &lon ) ;
    printf (" \n Saissisez la largeur du rectangle  ");
    scanf (" %d" , &lar ) ;
    printf ( " L'aire du rectangle est:  %d" , lon * lar ) ;
    printf ( " Le prerimetre du rectangle est:  %d" , (lon + lar) * 2 ) ;*/

//EXERCICE 3
    /*int n = 0 ;
    printf (" \n Saissisez un entier ");
    scanf (" %d" , &n ) ;
    const int div3 = 3 ;
    if  ( n % div3 == 0 ) {
        printf ("il s'agit d'un multiple de trois ") ;
    }
    else {
        printf (" Ce n'est pas un multiple de trois ") ;
    }
    if ( n > 10  ) {
        printf ("\n Lentier est supperieur a 10 " ) ;
    }
    else {
        printf ("\n Lentier n'est pas supperieur a 10 " ) ;
    }*/

//EXERCICE 4
    /*int age = 0 ;
    int etudiant = 0 ;
    printf (" \n Saissisez l'age du client ") ;
    scanf (" %d" , &age ) ;
    printf (" \n Etes vous etudiant ? ( oui = 1 et non = 0) ") ;
    scanf ( " %d" , &etudiant  ) ;
    if ( age < 12 ) {
        printf (" tarif enfant : 4 euro " ) ;
    }
    else if (( 12 <= age && age <= 17 ) || ( etudiant == 1 && age <= 27)) {
        printf (" tarif jeune : 6 euro " ) ;
    }
    else if ( age >= 65 ) {
        printf (" tarif senior : 6 euro " ) ;
    }
    else {
        printf (" plein tarif : 9 euro " ) ;
    }*/

//EXERCICE 5
   /*int nBoisson = 0 ;
   printf ("selectionner votre numero de boisson ") ;
   scanf ("%d", &nBoisson) ;
   if (nBoisson == 1) {
       printf ("ice tea") ;
   }
   else if (nBoisson == 2 ) {
       printf ( " coca cola ") ;
   }
   else if (nBoisson == 3 ) {
       printf (" limonade ") ;
   }
   else if (nBoisson == 10 ) {
       printf ("cafe ") ;
   }
   else if (nBoisson == 11) {
       printf (" chocolat chaud ") ;
   }
   else {
       printf (" aucune boisson correspond a votre numero ") ;
   }*/

//EXERCICE 6
   /*float note1 = 0 , note2 = 0 , note3 = 0 , moyenne = 0 ;
   printf ("saisissez trois notes ") ;
   scanf ("%f %f %f" , &note1 , &note2 , &note3 ) ;
   if ((note1 <= 20 && note1 >= 0) && (note2 <= 20 && note2 >= 0) && (note3 <= 20 && note3 >= 0))
   {
       moyenne =  ( note1 + note2 + note3 ) / 3 ;
       printf("La moyenne est %f  ", moyenne ) ;
   }
   else {
       printf (" La note n'est pas conforme, rentrez une nouvelle note ") ;
   }*/

//EXERCICE 7
   /*int nclasses = 0 , neleves = 0 , total = 0 , k = 0 ;
   printf ("Saisissez le nombre de classes ") ;
   scanf ( "%d" , &nclasses ) ;
   while ( k < nclasses ) {
       printf ( " \n Saisissez le nombre d'eleves pour cette classe") ;
       scanf ( "%d" , &neleves ) ;
       total = total + neleves ;
       k = k + 1 ;
   }
   printf (" \n Le normbre d'eleves dans l'ecole est %d ", total ) ;*/

//EXERCICE 8
   /*int nombre = 0 ;
   printf (" Saisissez un nombre") ;
   scanf ( "%d" , &nombre ) ;      // attention on veut (n % 2 == 0 && n % 7 == 0) donc dans la boucle on met l'inverse
   while ( !(nombre % 2 == 0 && nombre % 7 == 0)) {
       printf (" \n Saisissez un autre nombre" ) ;
       scanf ( "%d" , &nombre ) ;
   }*/

//EXERCICE 9
   /*int npierres = 0 , netages = 0  ;
   printf ("saisissez le nombre de pierre") ;
   scanf ("%d" , &npierres ) ;
   while ( npierres >= 0 ){
      netages = netages + 1 ;
      npierres =  npierres - netages * netages ;
   }
   printf ("le nombre d'etages est %d" , netages - 1 ) ;*/

//EXERCICE 10
   /*float entier = 0 , moy = 0 , i = 0 , sommeentier = 0 ;
   while (entier >= 0 )  {
       printf (" Saisissez un entier positif") ;
       scanf ("%f", &entier ) ;
       if (entier < 0 ){
           printf ("la moyenne est %f", moy) ;
       }
       else {
           i = i + 1 ;
           sommeentier = sommeentier + entier ;
           moy = sommeentier / i  ;
       }
   }
   printf ("\n La moyenne est %f", moy) ;*/

    return 0;
}
