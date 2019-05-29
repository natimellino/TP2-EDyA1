typedef struct _CDList{
    wchar_t* palabra;
    struct _CDList* ant;
    struct _CDList* sig;
}CDList;

typedef CDList* Cola;

Cola cola_crear();

int cola_es_vacia(Cola cola);

wchar_t* cola_primero(Cola cola);

Cola cola_encolar(Cola cola, wchar_t* palabra);

Cola cola_desencolar(Cola cola);

void cola_imprimir(Cola cola);