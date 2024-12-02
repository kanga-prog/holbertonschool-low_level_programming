#ifndef LISTS_H
#define LISTS_H

/* Définition de la structure d'un nœud de liste chaînée*/
struct Node {
    int data;           /* Donnée stockée dans le nœud*/
    struct Node* next;  /* Pointeur vers le nœud suivant*/
};

/* Fonction pour afficher tous les éléments de la liste*/
size_t print_list(const list_t *h);



/* Fonction pour ajouter un élément au début de la liste*/
void push(struct Node** head_ref, int new_data);

/* Fonction pour supprimer le premier élément de la liste*/
void pop(struct Node** head_ref);


/* Fonction pour rechercher un élément dans la liste*/
int search(struct Node* head, int key);

/* Fonction pour supprimer un élément spécifique de la liste*/
void deleteNode(struct Node** head_ref, int key);

/* Fonction pour libérer toute la mémoire allouée pour la liste*/
void freeList(struct Node* head);

#endif

