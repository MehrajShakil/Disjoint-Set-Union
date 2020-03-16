//Bismillahhir-Rahmanir-Rahim
//copy from Shuvro Sarker.
//few update also...
void makeSet(int n)
{
    parent[n]=n;
    Size[n] = 1;
}

int Find(int reprasentative)
{
    if (parent[reprasentative] == reprasentative)
    {
        return reprasentative;
    }
    return parent[reprasentative] = Find(parent[reprasentative]);
}

void Union(int a,int b)
{
    a = Find(a);
    b = Find(b);
    if(a == b)
    {
        printf("Frnds");
    }
    else {
            if (Size[a] < Size[b])
                swap(a, b);
                parent[b]=a;
                Size[a]+=Size[b];
          }
}

int main()
{
    for (int i=0; i < size; i++)
    {
        makeSet(i);
    }

    return 0;
}
