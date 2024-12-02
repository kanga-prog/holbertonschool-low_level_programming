                                       **README** sur les **Linked Lists** signé par 
Autheur : Kanga Kouakou Brice :

---

# Linked Lists

## Description

Les **Linked Lists** (listes chaînées) sont une structure de données dynamique qui permet de stocker des éléments (ou nœuds) de manière non contiguë en mémoire. Chaque nœud dans une liste chaînée contient deux parties : une valeur (ou donnée) et un pointeur (ou lien) vers le prochain nœud. Contrairement aux tableaux, les éléments d'une liste chaînée ne sont pas stockés consécutivement en mémoire.

Les listes chaînées sont utilisées dans de nombreuses applications, notamment dans les files d'attente, les piles, et dans des structures de données plus complexes comme les graphes.

## Types de Linked Lists

1. **Liste chaînée simple (Singly Linked List)** :
   - Chaque nœud contient un pointeur vers le suivant.
   - La traversée se fait dans une direction, du début vers la fin de la liste.

2. **Liste chaînée double (Doubly Linked List)** :
   - Chaque nœud contient deux pointeurs : un vers le suivant et un vers le précédent.
   - Permet de parcourir la liste dans les deux directions.

3. **Liste chaînée circulaire (Circular Linked List)** :
   - La dernière case de la liste pointe vers le premier nœud, formant ainsi un cycle.

## Opérations sur les Linked Lists

Voici les principales opérations que l'on peut effectuer sur une liste chaînée :

- **Insertion** : Ajouter un élément à la liste (au début, à la fin ou à une position spécifique).
- **Suppression** : Supprimer un élément de la liste.
- **Recherche** : Trouver un élément donné dans la liste.
- **Parcours** : Traverser la liste pour afficher ou manipuler ses éléments.
- **Modification** : Modifier un élément existant dans la liste.

## Avantages des Linked Lists

- **Dynamisme** : Contrairement aux tableaux, les listes chaînées ne nécessitent pas de taille fixe et peuvent se redimensionner dynamiquement en fonction des besoins.
- **Insertion et suppression efficaces** : L'insertion et la suppression d'éléments, surtout au début ou au milieu de la liste, sont plus rapides que dans un tableau, car elles ne nécessitent pas de déplacement des éléments comme dans les tableaux.
  
## Inconvénients des Linked Lists

- **Accès séquentiel** : Contrairement aux tableaux, l'accès à un élément spécifique d'une liste chaînée nécessite de traverser la liste depuis le début jusqu'à l'élément recherché.
- **Utilisation mémoire** : Chaque nœud doit contenir un pointeur supplémentaire (ou deux dans une liste double), ce qui peut augmenter la consommation mémoire par rapport aux tableaux.

## Exemple de code en C : Liste chaînée simple

```c
#include <stdio.h>
#include <stdlib.h>

// Définition du nœud de la liste chaînée
struct Node {
    int data;
    struct Node* next;
};

// Fonction pour ajouter un nœud au début de la liste
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Fonction pour afficher la liste chaînée
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    
    // Ajouter des éléments à la liste
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    
    // Afficher la liste
    printList(head);
    
    return 0;
}
```

### Sortie attendue :

```
3 -> 2 -> 1 -> NULL
```

## Conclusion

Les listes chaînées sont une structure de données très flexible et puissante qui permet de gérer dynamiquement des ensembles d'éléments. Bien qu'elles offrent des avantages en termes de flexibilité et de performance dans certaines opérations, elles peuvent également présenter des inconvénients liés à la gestion de la mémoire et à l'accès séquentiel.

---

*Ce document a été préparé par Kanga Kouakou Brice.*
