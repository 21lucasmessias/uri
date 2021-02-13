#include <bits/stdc++.h>

using namespace std;

typedef struct CircleList
{
  int v;
  struct CircleList *next = nullptr;
} CircleList;

void initList(CircleList **p)
{
  if (*p != nullptr)
  {
    free(*p);
  }

  *p = (CircleList *)malloc(sizeof(CircleList));

  if (*p == nullptr)
    abort;

  (*p)->v = 1;
  (*p)->next = nullptr;
}

void addPeople(CircleList *p, int value)
{
  p->next = (CircleList *)malloc(sizeof(CircleList));
  if (p->next == nullptr)
    abort;

  p->next->v = value;
  p->next->next = nullptr;
}

void removePeople(CircleList *p)
{
  CircleList *aux = p->next;

  p->next = p->next->next;

  free(aux);
}

int main()
{
  CircleList *p = nullptr, *first = nullptr;

  int c, cn, n, k, j, i = 0;
  long long int asn;

  cin >> c;

  for (cn = 1; cn <= c; cn++)
  {
    cin >> n >> k;

    initList(&p);
    first = p;

    for (i = 2; i <= n; i++)
    {
      addPeople(p, i);
      p = p->next;
    }

    p->next = first;

    if (n % 2)
    {
      asn = (n * ((n / 2) + 1));
    }
    else
    {
      asn = (n * (n / 2) + (n / 2));
    }

    for (i = 0; i < n - 1; i++)
    {
      for (j = 0; j < k - 1; j++)
        p = p->next;

      asn -= p->next->v;

      removePeople(p);
    }

    cout << "Case " << cn << ": " << asn << endl;

    asn = 0;
  }

  return 0;
}