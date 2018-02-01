int head[maxn], no;
struct Edge
{
	int v, w, next;
}e[maxn << 1];
int n;
void Init()
{
	mem(head, -1);
	no = 0;
}
void Add(int u, int v, int w)
{
	e[no].v = v;
	e[no].w = w;
	e[no].next = head[u];
	head[u] = no++;
}
//访问
for (int i = head[v]; i != -1; i = e[i].next)