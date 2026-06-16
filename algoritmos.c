/*
 * algoritmos.c
 * IE-0117 - Tarea en clase: Ordenamiento y Búsqueda
 *
 * Implementar las funciones asignadas en este archivo.
 * No modificar algoritmos.h ni main.c.
 */

#include "algoritmos.h"

/* ── Ordenamiento ─────────────────────────────────────── */

void bubble_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

void selection_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

void insertion_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    return -1;
}

int busqueda_binaria(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    return -1;
}

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    int k = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == valor) {
            posiciones[k] = i;
            k++;
        }
    }
    (void)arr;
    (void)n;
    (void)valor;
    (void)posiciones;
    return k;
}
