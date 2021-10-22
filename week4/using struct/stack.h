#define Max 50
typedef int Eltype;
typedef struct StackRec {
	Eltype storage[Max];
	int top;
	
} StackType;

void Initialize(StackType *stack);

int empty(StackType stack);

int full(StackType stack);
void push(Eltype el, StackType * stack);
Eltype pop(StackType * stack);
