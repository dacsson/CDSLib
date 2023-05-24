#include "hashmap.h"

#pragma region "Node and bucket implementation"

typedef struct Bucket Bucket;
typedef struct Node Node;

// - Elements that are stored in the Buckets
struct Node
{
    void* key;
    void* value;
    Node* next;
};

Node* node_new(void* key, void* value, Node* next)
{
    Node* newNode;
    newNode -> key = key;
    newNode -> value = value;
    newNode -> next = next;

    return newNode;
}

// - Element of hashtable, that stores doubly-linked list of Nodes
struct Bucket
{
    // - First node in bucket
    Node* node_head;
    // - Number of nodes in bucket
    size_t size;
};

Bucket* bucket_new()
{
    Bucket* newBucket;
    newBucket -> node_head = node_new(NULL, NULL, NULL);
    newBucket -> size = 0;

    return newBucket;
}

void bucket_push(Node node)
{

}

void bucket_remove(size_t index)
{
    
}

#pragma endregion

#pragma region "Hashtable implementation"



#pragma endregion