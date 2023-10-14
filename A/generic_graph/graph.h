#include <stdio.h>

#define NAME_SIZE 20
#define MAX_IF_PER_NODE 4

typedef struct node_ node_t;
typedef struct link_ link_t;
typedef struct interface_ interface_t;

struct link_ {
    interface_t intf1, intf2;
    unsigned int cost;
};

struct node_ {
    char name[NAME_SIZE];
    interface_t *intf[MAX_IF_PER_NODE];
};

struct interface_ {
    char name[NAME_SIZE];
    node_t *att_node;

};

typedef struct graph {
    char topology_name[NAME_SIZE];
    
} graph_t;


