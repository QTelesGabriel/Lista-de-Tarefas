typedef enum status_tarefa {
    A_FAZER,
    ANDAMENTO,  
    FINALIZADA
} ETarefa;

typedef struct {
    int id;
    ETarefa status;
    char titulo[500];
} t_tarefa;


typedef struct NoTarefa {
    t_tarefa tarefa;
    struct NoTarefa *proximo;
    struct NoTarefa *anterior; 
} no_tarefa;

typedef struct {
    no_tarefa *primeiro;
    no_tarefa *ultimo;
    unsigned int size;
} t_lista;

no_tarefa *criar_tarefa(char *titulo_tarefa, int id_tarefa);
void menu_de_inicializacao(t_lista *lista, int *pt_id);
void tela_inicial(t_lista *lista, int *pt_id);
void gerenciar_tarefa(t_lista *lista, int *pt_id);
void creditos();
void inicializar(t_lista *lista);
void criar_nova_tarefa(t_lista *lista, int *pt_id);
void editar_tarefa(t_lista *lista);
void deletar_tarefa(t_lista *lista);
void listar_tarefas(t_lista *lista);
void salvar_tarefas_em_arquivo(t_lista *lista, const char *nome_arquivo);
void carregar_tarefas_de_arquivo(t_lista *lista, const char *nome_arquivo, int *pt_id);