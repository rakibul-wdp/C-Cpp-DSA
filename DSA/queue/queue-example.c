#define Q_SIZE 5

typedef struct {
  int data[Q_SIZE + 1];
  int head, tail;
} Queue;

void enqueue(Queue *q, int item) {
  if ((q->tail + 1) % (Q_SIZE + 1) == q->head) {
    printf("Queue is full\n");
    return;
  }
  q->data[q->tail] = item;
  q->tail = (q->tail + 1) % (Q_SIZE + 1);
}

int dequeue(Queue *q) {
  int item;

  if (q->tail == q->head) {
    printf("Queue is empty\n");
    return -1;
  }

  item = q->data[q->head];

  q->head = (q->head + 1) % (Q_SIZE + 1);

  return item;
}